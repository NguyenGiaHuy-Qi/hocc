#include<stdio.h>
int arr(){
	int arr[5] = {5,6,7,4,3};
	int max = arr[0];
	for(int i = 0;i < 5;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	printf("Gia tri lon nhat la %d",arr());
	return 0;
}