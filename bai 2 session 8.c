#include<stdio.h>
int main(){
	int n[4] = {1,2,3,4};
	int j;
	int found =0;
	printf("Nhap mot phan tu: ");
	scanf("%d",&j);
	for(int i = 0;i < 4;i++){
		if(n[i] == j){
			printf("Vi tri phan tu la %d",i);
			found++;
			break;
		}}
if(found == 0){
	printf("Phan tu khong ton tai trong mang");
}
	return 0;
}