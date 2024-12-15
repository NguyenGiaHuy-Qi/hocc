#include<stdio.h>
#include<math.h>
int prime(int n){
if(n < 2){
	return 0;
}for(int i = 2;i <= sqrt(n);i++){
	if(n % i == 0){
		return 0;
	}
}return 1;}
int main(){
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d",&n);
	int count = 0;
	int num = 2;
	while(count < n){
		if(prime(num) == 1){
			printf("%d ",num);
			count++;
		}
		num++;
	}return 0;
}