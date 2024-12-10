#include<stdio.h>
int main(){
	float a,b,c,tongdiem,diemtb;
	printf("Nhap diem toan: ");
	scanf("%f",&a);
	printf("Nhap diem anh: ");
	scanf("%f",&b);
	printf("Nhap diem van: ");
	scanf("%f",&c);
	tongdiem = a + b +c;
	diemtb = tongdiem / 3;
	printf("Tong diem la %.2f\nDiem trung binh la %.2f",tongdiem,diemtb);
	return 0;
}