#include<stdio.h>
#include<math.h>
int perfect(int a){
	int tong = 0;
	for(int i = 1;i<=sqrt(a);i++){
		if(a % i == 0){
			tong += i;
			if( i != a / i){
				tong += a / i;
			}
		}
	}
	if(tong - a == a){
		return 1;
	}
	return 0;
}
int main(){
	int n,m;
	printf("Nhap mot so nguyen: ");
scanf("%d",&n);
printf("Nhap vao mot so nguyen khac: ");
scanf("%d",&m);
if(perfect(n)){
	printf("%d la so hoan hao\n",n);
}else{
	printf("%d khong phai la so hoan hao\n",n);
}
if(perfect(m)){
	printf("%d la so hoan hao\n",m);
}else{
	printf("%d khong phai la so hoan hao\n",m);
}
return 0;
}
