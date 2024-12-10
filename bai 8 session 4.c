#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);
	if(a + b > c && a + c > b && b + c > a){
		printf("day la 1 tam giac");
	}else{
		printf("day ko phai la 1 tam giac");
	}return 0;
}