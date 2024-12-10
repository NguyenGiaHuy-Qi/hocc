#include<stdio.h>
int main(){
	int n;
	printf("Nhap nam ban muon chon: ");
	scanf("%d",&n);
	if((n % 4 == 0 && n % 100 != 0)|| (n % 400 == 0)){
		printf("Nam nay la nam nhuan");
	}else{
		printf("Nam nay ko phai la nam nhuan");
	}return 0;
}