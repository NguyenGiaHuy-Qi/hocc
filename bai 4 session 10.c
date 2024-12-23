#include<stdio.h>
int main(){
	int a[5] = {9,4,6,2,3};
	int min,temp;
	for(int i = 0;i < 4;i++){
		min = i;
		for(int j = i+1;j < 5;j++){
			if(a[j] < a[min]){
			min = j;
			}
		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}for(int i = 0;i<5 ;i++){
		printf("%d",a[i]);
	}
	return 0;
}