#include<stdio.h>
int main(){
	int n = 1,t,sum = 0;
	printf("Nhap so ban muon cong toi: ");
	scanf("%d",&t);
	while (n <= t){
		sum +=n;
		n++;
	}printf("Vay tong tu 1 toi %d la %d",t,sum);
	return 0;
}