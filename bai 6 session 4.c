#include<stdio.h>
int main(){
	int n,tien = 0;
	printf("Nhap so kwh dien: ");
	scanf("%d",&n);
	while(n < 0 ){
		printf("dulieu ko hop le vui long nhap lai: ");
		scanf("%d",&n);
	}
	if(n < 50){
		tien = n * 10000;
	}else if(n < 100){
		tien = 50 * 10000 +(n - 50)* 15000;
	}else if(n < 150){
		tien = 50*10000 +50*15000 +(n-100)*20000;
		}else if(n < 200){
			tien = 50*10000 + 50*15000+50*20000 +(n-150)*25000;
		}else if(n >= 200){
			tien =50*10000+50*15000+50*20000+50*25000+(n-200)*30000;
		}printf("vay tien dien cua ban la %d",tien);
		return 0;
	}
