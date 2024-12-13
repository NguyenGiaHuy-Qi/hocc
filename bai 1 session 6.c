#include<stdio.h>
int main(){
	int n,sum = 0;
	for(int i = 1;i <= 5;i++){
	printf("Nhap 5 so nguyen: ",i);
	scanf("%d",&n);
	if(n % 2 != 0){
		sum += n;
	}}printf("Tong cac so le la %d",sum);
	return 0;
}