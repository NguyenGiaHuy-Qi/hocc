#include<stdio.h>
int main(){
	int a,sum = 0;
	printf("Nhap so nguyen co 4 so: ");
	scanf("%d",&a);
	sum += a % 10;      
    a /= 10;            
    sum += a % 10;      
    a /= 10;            
    sum += a % 10;     
    a /= 10;           
    sum += a;
    printf("%d",sum);
	return 0;
}
