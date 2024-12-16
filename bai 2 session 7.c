#include<stdio.h>
int main(){
	int a[5];
	printf("Nhap 5 gia tri vao mang: ");
	for(int i = 0;i < 5;i++){
		scanf("%d",&a[i]);
	}		printf("Cac gia tri vua nhap la: ");
	for(int i = 0;i < 5;i++){
		printf("%d ",a[i]);
	}
	return 0;
}