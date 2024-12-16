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
	printf("\nMang sau khi thay doi la: ");
	for(int i = 0;i < 5;i++){
		if(a[i] % 2 == 0){
			a[i] += 3;
		}else{
			a[i] +=2;
		}printf("%d ",a[i]);
	}return 0;
}