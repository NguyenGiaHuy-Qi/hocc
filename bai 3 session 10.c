#include<stdio.h>
int main(){
	int a[] = {1,3,2,4,6,9,7};
	int n = sizeof(a)/sizeof(a[0]);
	for(int i = 1;i < n;i++){
		int key = a[i];
		int j = i -1;
		while(j >=0 && a[j] > key){
			a[j+1] = a[j];
			j = j -1;
		}
		a[j+1] = key;
	}
	for(int i = 0;i <n;i++){
		printf("%d",a[i]);
	}
	return 0;
}