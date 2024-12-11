#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	while(b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	printf("UCLN cua hai so la %d",a);
	return 0;
}