#include<stdio.h>
int tong(int *a,int *b){
	int sum = *a+*b;
	return sum;
}
int main(){
	int a = 2;
	int b = 3;
	printf("Tong hai so nguyen la: %d + %d = %d",a,b,tong(&a,&b));
	return 0;
}