#include<stdio.h>
int main(){
	int a,sum = 0;
	printf("Nhap so nguyen co 4 so: ");
	scanf("%d",&a);
	while(a!= 0){
	int x = a % 10;
	sum += x;
	a = a/10;	
	}printf("vay tong la %d",sum);
	return 0;
}