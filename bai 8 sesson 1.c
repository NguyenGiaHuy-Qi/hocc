#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,delta,x,x1,x2;
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b);
	printf("Nhap c: ");
	scanf("%f",&c);
	delta = b*b - 4*a*c;
	if(delta < 0){
	printf("pt vo nghiem");
	}
	else if(delta >= 0){
	printf("pt co nghiem\n");
	if(delta == 0){
		x = -b/(2*a);
		printf("phuong trinh co nghiem kep la %.2f",x);
	}else{
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);
	printf("phuong trinh co nghiem x1 = %.2f\n",x1);
	printf("phuong trinh co nghiem x2 = %.2f",x2);
	}
	}
	return 0;
}