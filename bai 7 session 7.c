#include<stdio.h>
int main(){
int x;
printf("Nhap so phan tu cua mang: ");
scanf("%d",&x);
int a[x];
for(int i = 0;i < x;i++){
	int temp;
	do{
		printf("Nhap phan tu %d vao mang: ",i + 1);
		scanf("%d",&temp);
		if(temp % 2 == 0){
			printf("Phai la so le.Nhap lai");
		}
	}while (temp % 2 == 0);
	a[i] = temp;
}printf("Cac phan tu trong mang sau khi doi la: ");
for(int i = 0;i < x;i++){
	printf("%d ",a[i]);}
return 0;}