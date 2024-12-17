#include<stdio.h>
int main(){
	int day,month;
	printf("Nhap thang:");
	scanf("%d",&month);
	printf("Nhap ngay:");
	scanf("%d",&day);
	if(day > 0 && day < 32 && month > 0 && month < 13){
	if ((day >= 21 && month == 3) || (day <= 19 && month == 4)) {
        printf("Cung hoang dao: Bach Duong");
    } else if ((day >= 20 && month == 4) || (day <= 20 && month == 5)) {
        printf("Cung hoang dao: Kim Nguu");
    } else if ((day >= 21 && month == 5) || (day <= 20 && month == 6)) {
        printf("Cung hoang dao: Song Tu");
    } else if ((day >= 21 && month == 6) || (day <= 22 && month == 7)) {
        printf("Cung hoang dao: Cu Giai");
    } else if ((day >= 23 && month == 7) || (day <= 22 && month == 8)) {
        printf("Cung hoang dao: Su Tu");
    } else if ((day >= 23 && month == 8) || (day <= 22 && month == 9)) {
        printf("Cung hoang dao: Xu Nu");
    } else if ((day >= 23 && month == 9) || (day <= 22 && month == 10)) {
        printf("Cung hoang dao: Thien Binh");
    } else if ((day >= 23 && month == 10) || (day <= 21 && month == 11)) {
        printf("Cung hoang dao: Bo Cap");
    } else if ((day >= 22 && month == 11) || (day <= 21 && month == 12)) {
        printf("Cung hoang dao: Nhan Ma");
    } else if ((day >= 22 && month == 12) || (day <= 19 && month == 1)) {
        printf("Cung hoang dao: Ma Ket");
    } else if ((day >= 20 && month == 1) || (day <= 18 && month == 2)) {
        printf("Cung hoang dao: Bao Binh");
    } else if ((day >= 19 && month == 2) || (day <= 20 && month == 3)) {
        printf("Cung hoang dao: Song Ngu");
    } else {
        printf("Ngay sinh hoac thang sinh khong hop le");
    }}else{
		printf("Du lieu khong hop le");

    return 0;
}
