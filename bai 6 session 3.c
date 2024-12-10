#include<stdio.h>
int main(){
	float a,h;
	printf("Nhap chieu dai canh cua hinh tam giac: ");
	scanf("%f",&a);
	printf("Nhap chieu cao cua hinh tam giac: ");
	scanf("%f",&h);
	float dt = 0.5*a*h;
	printf("Dien tich hinh tam giac la %.2f",dt);
	return 0;
}