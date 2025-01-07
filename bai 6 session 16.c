#include<stdio.h>
int search(int *arr,int val,int size){
	for(int i = 0;i < size;i++){
		if(arr[i] == val){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int val;
	printf("Nhap gia tri can tim:");
	scanf("%d",&val);
	int pos = search(arr,val,size);
	if(!pos){
		printf("Khong tim thay gia tri");
	}else{
		printf("Gia tri %d tai vi tri %d",val,pos);;
	}
}