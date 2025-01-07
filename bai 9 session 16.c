#include<stdio.h>
void add(int *arr,int size){
	int val,pos;
	printf("\nNhap gia tri moi: ");
	scanf("%d",&val);
	printf("Nhap vi tri can them: ");
	scanf("%d",&pos);
	if(pos < 0 || pos > size){
		printf("Vi tri khong hop le");
	}else{
		for(int i = size;i > pos;i--){
			arr[i] = arr[i - 1];
		}
		arr[pos-1] = val;
		size++;
		printf("Mang sau khi duoc them la:");
		for(int  i = 0;i< size;i++){
			printf("%d ",arr[i]);
		}
	}
}
int main(){
	int arr[] = {2,4,8,5,7,8,6,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Mang ban dau la:");
	for(int i = 0;i<size;i++){
		printf("%d ",arr[i]);
	}
	add(arr,size);
}