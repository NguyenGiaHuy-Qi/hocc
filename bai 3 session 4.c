#include<stdio.h>
int main(){
	int a;
	printf("Nhap so nguyen de check: ");
	scanf("%d",&a);
	if(a % 3 == 0 && a % 5 == 0){
		printf("So nay chia het cho ca 3 va 5");
	}else if(a % 3 == 0){
		printf("So nay chia het cho 3");
	}else if(a % 5 == 0){
		printf("So nay chia het cho 5");
	}return 0;
}