#include<stdio.h>
int main(){
int n1,n2,n3;
printf("Nhap lan luot 3 so nguyen: ");
scanf("%d %d %d", &n1, &n2, &n3);
if(n3 >= n1 && n3 <= n2 || n3 <= n1 && n3 >= n2){
	printf("so nay nam giua so thu nhat va so thu hai");
}else{
	printf("So nay khong nam giua so thu nhat va so thu  hai");
}
return 0;
}