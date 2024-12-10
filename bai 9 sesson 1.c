#include<stdio.h>
#include<math.h>
int main(){
	int n1,n2,ucln,bcnn;
	scanf("%d",&n1);
	scanf("%d",&n2);
	for(int i = 1;i <= n1 && i <= n2;i++){
		if(n1 % i == 0 && n2 % i == 0){
		ucln = i;
		}
	}
	bcnn = abs(n1*n2)/ucln;
	printf("vay boi chung nho nhat cua hai so tren la %d",bcnn);
	return 0;
}