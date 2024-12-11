#include<stdio.h>
int main(){
	int n = 23,t;
	printf("Nhap so xem co trung voi so cho truoc ko: ");
	scanf("%d",&t);
	while(n != t){
		printf("Sai roi nhap lai di: ");
		scanf("%d",&t);
	}printf("Dung r");
	return 0;
}