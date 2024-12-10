#include<stdio.h>
int main(){
	float n;
	printf("Nhap diem so can xep loai: ");
	scanf("%f",&n);
	if(n < 4){
		printf("KHONG DAT");
	}else if(4 <= n && n <= 6){
		printf("TRUNG BINH");
	}else if(6 < n && n <= 8){
		printf("KHA");
	}else if(8 < n && n <= 9){
		printf("GIOI");
	}else{
		printf("XUAT XAC");
	}return 0;
}