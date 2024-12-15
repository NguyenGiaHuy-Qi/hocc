#include<stdio.h>
#include<math.h>
int main(){
	int tien,thang;
	float lai,tienlai,tiennhanduoc;
	printf("Nhap so tien gui: ");
	scanf("%d",&tien);
	printf("Nhap thang: ");
	scanf("%d",&thang);
	printf("Nhap lai suat: ");
	scanf("%f",&lai);
	tiennhanduoc =tien*pow(1+lai/100.0,thang);
	tienlai = tiennhanduoc - tien;
	printf("Tien lai la %.3f\n",tienlai);
	printf("Tien nhan duoc la %.3f",tiennhanduoc);
	return 0;
}