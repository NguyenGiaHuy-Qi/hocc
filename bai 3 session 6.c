#include <stdio.h>
int main(){
	int mk = 123654,t;
	printf("Vui long nhap pass co 6 chu so");
	do{
		printf("Nhap mat khau: ");
		scanf("%d",&t);
		if(t != mk){
			printf("Sai pass roi nhap lai di\n");
		}
	}while(t != mk);
	printf("Dung pass roi");
	return 0;
}