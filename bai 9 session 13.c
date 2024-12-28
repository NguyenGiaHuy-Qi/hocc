#include<stdio.h>
#define MAX 100
int array[MAX][MAX];
int n,m;
void inputarr(){
	printf("Nhap so hang: ");
	scanf("%d",&n);
	printf("Nhap so cot: ");
	scanf("%d",&m);
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			printf("Array[%d][%d]:",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}
};
void printarr(){
	for(int i = 0;i<n;i++){
		for(int  j =0;j<m;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
};
void corner(){
	for(int i = 0;i<n;i++){
		for(int j = 0;j< m;j++){
			if( i == 0 && j == 0 || i == 0 && j == m - 1 || i == n - 1 && j == 0 || i == n - 1 && j == m - 1){
				printf("%d ",array[i][j]);
			}else{
				printf("%c ",32);
			}
		}
		printf("\n");
	}
};
void boundery(){
	for(int  i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(i == 0 || i == n - 1 || j == 0 || j == m - 1){
				printf("%d ",array[i][j]);
			}else{
				printf("%c ",32);
			}
		}
		printf("\n");
	}
};
void diagonal(){
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(i == j || i + j == n - 1){
				printf("%d ",array[i][j]);
			}else{
				printf("%c ",32);
			}
		}
		printf("\n");
	}
};
void isprime(){
	int found = 0;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			int num = array[i][j];
			int prime = 1;
			if(num < 2){
				prime = 0;
			}else{
				for(int k = 2;k< num;k++){
					if( num % k == 0){
						prime = 0;
						break;
					}
				}
			}
			if(prime){
				printf("%d ",num);
				found = 1;
			}else{
				printf("%c ",32);
			}
		}
			printf("\n");
	}
}
int main(){
	int choice;
	do {
    printf("MENU\n");
    printf("1. Nhap ma tran\n");
    printf("2. In ma tran\n");
    printf("3. In cac phan tu o goc\n");
    printf("4. In cac phan tu nam tren duong bien\n");
    printf("5. In cac duong cheo\n");
    printf("6. In cac phan tu la so nguyen to\n");
    printf("7. Thoat\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);
    switch(choice){
    	case 1:{
    		inputarr();
			break;
		}
		case 2:{
			printarr();
			break;
		}
		case 3:{
			corner();
			break;
		}
		case 4:{
			boundery();
			break;
		}
		case 5:{
			diagonal();
			break;
		}
		case 6:{
			isprime();
			break;
		}
		case 7:{
			printf("thoat chuong trinh");
			break;
		}
	}
} while (choice != 7);

	return 0;
}

