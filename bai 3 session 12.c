#include<stdio.h>
int giaithua(int a){
	int fact = 1;
	for(int i = 1;i <= a;i++){
		fact *= i;
	}
	return fact;
}
int main(){
	int n;
	printf("Nhap vao mot gia tri: ");
	scanf("%d",&n);
    printf("giai thua cua doi so la %d",giaithua(n));
	return 0;
}