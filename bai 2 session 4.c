#include<stdio.h>
int main(){
	int n;
	printf("Nhap 1 so nguyen: ");
	scanf("%d",&n);
	if(n % 2 ==  0){
		printf("So nay la so chan");
	}else{
		printf("So nay la so le");
	}return 0;
}