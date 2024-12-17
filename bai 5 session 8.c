#include<stdio.h>
int main(){
	int x =4,y=4;
	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{14,15,16,17}
		};
		int sum = 0;
		for(int i = 0;i < 4;i++){
			for(int j = 0;j < 4;j++){
			if(i == 0 || j == 0 || i == x-1 || j == y-1){
				sum += arr[i][j];
			}
}}printf("Tong cac chu so duong bien cua mang la %d",sum);
return 0; }
