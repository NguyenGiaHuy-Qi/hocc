#include<stdio.h>
int main(){
	int ngay,thang,nam;
	printf("Nhap ngay:");
	scanf("%d",&ngay);
	printf("Nhap thang:");
	scanf("%d",&thang);
	printf("Nhap nam:");
	scanf("%d",&nam);
	if(thang < 1 || thang > 12){
		printf("Thang ko hop le");
		return 0;
	}if(thang == 1||thang == 3||thang == 5||thang == 7||thang == 8||thang==10||thang == 12){
		if(ngay < 1||ngay>31){
			printf("Ngay ko hop le");
			return 0;
		}
	}else if(thang == 4||thang ==6||thang == 9||thang == 11){
		if(ngay<1|| ngay >30){
			printf("Ngay ko hop le");
			return 0;
		}
	}else{
		if((nam % 4 == 0 && nam % 100 != 0) ||(nam % 400 == 0)){
			if(ngay<1||ngay>29){
			
				printf("Ngay ko hop le");
				return 0;
			}
		}else{if(ngay< 1||ngay> 28){
			printf("Ngay ko hop le");
			return 0;
		}
		}
	}printf("Ngay thang nam hop le");
	return 0;
}