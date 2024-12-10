#include<stdio.h>

int main(){
	float r;
float pi = 3.14;
printf("Nhap ban kinh hinh tron: ");
	scanf("%f",&r);
 float cv = 2*r*pi;
 float dt = pi*r*r;
printf("Chu vi hinh tron la : %.2f\n",cv);
printf("Dien tich hinh tron la: %.2f\n",dt);
return 0;}
