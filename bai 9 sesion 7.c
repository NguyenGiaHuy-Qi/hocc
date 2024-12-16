#include<stdio.h>
int main(){
	int x,y;
	printf("Nhap so hang: ");
	scanf("%d",&x);
	printf("Nhap so cot: ");
	scanf("%d",&y);
	int arr[x][y];
	printf("Nhap cac phan tu vao tung hang:\n");
	for(int i = 0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("Phan tu vi tri (%d,%d): ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Bang ma tran:\n");
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(i == 0 || i == x-1 || j == 0 || j ==y-1){
				printf("%d ",arr[i][j]);
			}else{
				printf("  ");
			}
		}printf("\n");
	}return 0;}