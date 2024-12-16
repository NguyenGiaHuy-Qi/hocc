#include<stdio.h>
int main(){
int x;
printf("Nhap so phan tu cua mang: ");
scanf("%d",&x);
int a[x];
printf("Nhap cac phan tu vao mang: ");
for(int i = 0;i < x;i++){
	scanf("%d",&a[i]);
}	printf("Vay mang co %d phan tu la: ",x);
for(int i = 0;i < x;i++){
	printf("%d ",a[i]);}
return 0;}