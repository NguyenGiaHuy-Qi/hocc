#include<stdio.h>
int main(){
	int n,t;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Nhap t: ");
	scanf("%d",&t);
	if(n < t){
		printf("n nho hon t");
	}else{
		printf("t nho hon n");
	}return 0;
}