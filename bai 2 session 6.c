#include<stdio.h>
int main(){
	int n,chan = 0,le = 0;
	for(int i = 1;i <=5;i++){
		printf("Nhap 5 so nguyen: ",i);
		scanf("%d",&n);
		if(n % 2 == 0){
			chan++;
		}else{
			le++;		}
		}printf("So luong so chan la: %d va so luong so le la: %d",chan,le);
		return 0;
	}
