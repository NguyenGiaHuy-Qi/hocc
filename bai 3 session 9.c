#include<stdio.h>
int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int index;
	printf("Mang: ");
	for(int i = 0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nNhap vi tri can xoa: ");
	scanf("%d",&index);
	for(int i = index;i < n - 1;i++){
		arr[i] = arr[i+1];
	}n--;
	printf("\nMang sau khi xoa vi tri %d: ",index);
	for(int i = 0;i<n;i++){
		printf("%d ",arr[i]);
	}return 0;
}