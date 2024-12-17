#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d",&n);
	int arr[n][n];
	printf("Nhap phan tu vao mang %d x %d\n",n,n);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			printf("Nhap phan tu %dx%d: ",i+1,j+1);
		scanf("%d",&arr[i][j]);
		}}printf("ma tran vuong:\n");
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				printf("%d ",arr[i][j]);
			}			
			printf("\n");
		}
	return 0;
}