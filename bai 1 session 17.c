#include<stdio.h>
#define MAX 100
void input(int *arr,int *n);
void show(int *arr,int *n);
int size(int *n);
int tong(int *arr,int *n);
int maxval(int *arr,int *n);
int main(){
	int n;
	int arr[MAX];
	int choice;
	do{
		printf("MENU\n");
		printf("1.Nhap cac phan tu vao mang\n");
		printf("2.Hien thi cac phan tu vao mang\n");
		printf("3.Do dai cua mang\n");
		printf("4.Tinh tong cac phan tu\n");
		printf("5.Tim so lon nhat\n");
		printf("6.Thoat chuong trinh\n");
		printf("Nhap lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				input(arr,&n);
				break;
			}
			case 2:{
				show(arr,&n);
				break;
			}
			case 3:{
				printf("Do dai cua mang la:%d\n",size(&n));
				break;
			}
			case 4:{
				printf("Tong cac phan tu = %d\n",tong(arr,&n));
				break;
			}
			case 5:{
				printf("Gia tri lon nhat trong mang la %d\n",maxval(arr,&n));
				break;
			}
			case 6:{
				printf("gudbye");
				break;
			}
		}
	}while (choice != 6);
}
void input(int *arr,int *n){
	printf("Nhap so phan tu: ");
	scanf("%d",n);
	printf("Nhap tung phan tu vao mang:\n");
	for(int i = 0;i < *n;i++){
		printf("Array[%d]:",i+1);
		scanf("%d",&arr[i]);
	}
};
void show(int *arr,int *n){
	printf("Mang hien tai:\n");
	for(int i = 0;i < *n;i++){
		printf("Array[%d]: %d\n",i+1,arr[i]);
	}
};
int size(int *n){
	return *n;
};
int tong(int *arr,int *n){
	int sum = 0;
	for(int i = 0;i < *n;i++){
		sum += arr[i];
	}
	return sum;
};
int maxval(int *arr,int *n){
	int max = arr[0];
	for(int i = 0;i < *n;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
};