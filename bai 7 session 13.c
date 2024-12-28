#include<stdio.h>
int m2c(int row,int col){
	for(int i = 0;i<row;i++){
		for(int j = 0;j< col;j++){
			printf("*");
		}
		printf("\n");
	}
}
int main(){
	int row,col;
	printf("Nhap so hang: ");
	scanf("%d",&row);
	printf("Nhap so cot: ");
	scanf("%d",&col);
	printf("Mang 2 chieu vua nhap co hinh:\n");
	printf("",m2c(row,col));
	return 0;
}