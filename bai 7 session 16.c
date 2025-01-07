#include<stdio.h>
void sort(int *arr,int size){
	for(int i = 1;i < size;i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}
	printf("Mang sau khi duoc xep:");
	for(int i = 0;i< size;i++){
		printf("%d",arr[i]);
	}
}
int main(){
	int arr[] = {7,6,8,4,9,5,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	return 0;
}