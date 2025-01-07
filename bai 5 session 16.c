#include<stdio.h>
void insert(int *array,int *size){
	int val,pos;
	printf("Nhap gia tri moi:");
	scanf("%d",&val);
	printf("Nhap vi tri can cap nhat: ");
	scanf("%d",&pos);
	if(pos < 0 || pos > *size){
		printf("Vi tri khong hop le");
	}else{
		array[pos-1] = val;
		printf("Mang sau khi chen:");
		for(int i = 0;i < *size;i++){
			printf("%d ",array[i]);
		}
	}
}
int main(){
	int array[] ={1,2,3,4,5,6};
	int size = sizeof(array)/sizeof(array[0]);
	insert(array,&size);
	return 0;
}