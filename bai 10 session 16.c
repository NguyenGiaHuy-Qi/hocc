#include<stdio.h>
void del(int *arr,int *size){
	int pos;
	printf("Nhap vi tri can xoa: ");
	scanf("%d",&pos);
	for(int i = pos;i < *size - 1;i++){
		arr[i] = arr[i + 1];
	}
		(*size)--;
		printf("mang sau khi bi xoa bot:");
		for(int i = 0 ;i < *size;i++){
			printf("%d ",arr[i]);
		}
}
int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	del(arr,&size);
}