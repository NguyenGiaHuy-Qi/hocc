#include<stdio.h>
int main(){
	int n = 4,sum = 0;
	int a[4][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16}
};
for(int i = 0;i < n;i++){
	for(int j = 0;j < n;j++){
			printf("%d ",a[i][j]);
	}printf("\n");
}
printf("Cac phan tu tren duong cheo chinh la: ");
for(int i = 0;i < n;i++){
	sum += a[i][i];
	printf("%d ",a[i][i]);
}printf("\nTong duong cheo chinh la: %d",sum);
return 0;
}