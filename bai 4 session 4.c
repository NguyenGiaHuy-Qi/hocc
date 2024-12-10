#include<stdio.h>
int main(){
	int n;
	printf("Nhap thang ma ban muon: ");
	scanf("%d",&n);
	if(n >= 13){
		printf("Vui long nhap thang hop le?");
		return 1;
	}
	if(n == 2){
		printf("Thang 2 co 28 hoac 29 ngay");
	}else if(n == 4 || n == 6 || n == 9 || n == 11){
		printf("Thang nay co 30 ngay");
	}else{
		printf("Thang nay co 31 ngay");
	}return 0;
}