#include<stdio.h>
int main(){
	int a;
	printf("Nhap so nguyen co 4 so: ");
	scanf("%d",&a);
	int	hangngan = a / 1000;
	int hangtram = (a % 1000) / 100;
	int hangchuc = (a % 100)/ 10;
	int hangdonvi = a % 10;
	printf("vay tong la %d%d%d%d",hangdonvi,hangchuc,hangtram,hangngan);
	return 0;
}
