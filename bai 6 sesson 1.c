#include<stdio.h>
int main(){
	float a,b,x;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	if(a == 0){
		if(b == 0){
		printf("pt co vo so nghiem");
		}else{
			printf("pt vo nghiem");}
			
		}if( a != 0){
			x = -b/a;
		printf("nghiem cua pt la: %.2f",x);}
		return 0;}