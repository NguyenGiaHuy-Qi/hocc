#include<stdio.h>
#include<math.h>
int main(){
	int n,isprime = 1;
	printf("Nhap n:");
	scanf("%d",&n);
	if(n < 2){
		printf("%d khong phai la so nguyen to\n",n);
	}else{
		for(int i = 2;i <= sqrt(n);i++){
			if(n % i == 0){
			isprime = 0;
			break;
			}
			}
			if(isprime == 1){
				printf("%d la so nguyen to",n);
			}else{
				printf("%d khong phai la so nguyen to",n);
			}
	}return 0;
}