#include<stdio.h>
int main(){
	int n;
	printf("Nhap so ban muon viet bang cuu chuong cua so do: ");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		printf("%d x %d = %d\n",n,i,n*i);
	}return 0;
}