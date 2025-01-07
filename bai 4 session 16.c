#include<stdio.h>
void array(int *arr,int length){
	printf("Cac phan tu trong mang la:");
	for(int i = 0;i < length;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	int arr[] = {1,2,3,4,5};
	int length = sizeof(arr)/sizeof(arr[0]);
	array(arr,length);
	return 0;
}