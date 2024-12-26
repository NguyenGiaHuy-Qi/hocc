#include<stdio.h>
int main(){
	int row,col;
	printf("Nhap so hang: ");
	scanf("%d",&row);
	printf("Nhap so cot: ");
	scanf("%d",&col);
	int arr[row][col];
	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			printf("Nhap vao [%d][%d]: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	int cheo[row];
	for(int i = 0;i<row;i++){
		cheo[i] = arr[i][row-i-1];
	}
	for(int i = 0;i<row-1;i++){
		for(int j = 0;j<row - i -1;j++){
			if(cheo[j] < cheo[j+1]){
				int temp = cheo[j];
				cheo[j] = cheo [j+1];
				cheo[j+1] = temp;
			}
		}
	}
	for(int i = 0;i<row;i++){
		arr[i][row-i-1] = cheo[i];
	}
	printf("Mang sau khi duoc sap xep la:\n");
	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}