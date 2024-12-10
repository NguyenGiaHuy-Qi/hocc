#include<stdio.h>
int main(){
	float c,f;
	printf("Nhap do Celcius: ");
	scanf("%.2f",&c);
	f = c * 1.8  + 32;
	printf("Do Fahrenheit tuong ung la: %.2f\n",f);
	return 0;
}