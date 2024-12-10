#include<stdio.h>
int main(){
	float n;
	printf("Nhap diem so can xep loai: ");
	scanf("%f",&n);
	if(n >= 5){
		printf("DAT");
	}else{
		printf("KHONG DAT");
	}return 0;
}