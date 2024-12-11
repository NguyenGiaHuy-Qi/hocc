#include<stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen ban muon: ");
	scanf("%d",&n);
	int t = n,count = 0;
	while(t > 0){
		count++;
		t /= 10;
	}
	int kitu = 1;
	for(int i = 1;i < count;i++){
		kitu *= 10;
	}
	while(kitu > 0){
		printf("%d ",(n/kitu)%10);
		kitu /= 10;
	}
return 0;
}