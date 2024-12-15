#include<stdio.h>
int main(){
	int nam,thang,ngay;
	printf("Nhap so nam: ");
	scanf("%d",&nam);
	printf("Nhap so thang: ");
	scanf("%d",&thang);
	if(thang  == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
		printf("co 31 ngay");
	}else if(thang == 2){
		if(nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0){
			printf("co 29 ngay");
		}else{
			printf("co 28 ngay");
		}
	}else{
		printf("co 30 ngay");
	}return 0;
	}