#include<stdio.h>
int main(){
	int a,daongc = 0;
	printf("Nhap so nguyen co 4 so: ");
	scanf("%d",&a);
	while(a!= 0){
	int x = a % 10;
	daongc = daongc * 10 + x;
	a = a/10;	
	}printf("vay tong la %d",daongc);
	return 0;
}