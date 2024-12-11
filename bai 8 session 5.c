#include<stdio.h>
int main(){
	int a,b,ucln;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	int n1 = a;
	int n2 = b;
	while(b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	int bcnn = (n1*n2)/a;
printf("BCNN cua hai so la %d",bcnn);
	return 0;
}