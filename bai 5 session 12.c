#include<stdio.h>
#include<math.h>
int isprime(int n){
	if(n < 2){
		return 0;
	}
	for(int i = 2;i<sqrt(n);i++){
		if( n % i == 0){
			return 0;
	}
}
return 1;
}
int main(){
int n,m;
printf("Nhap mot so nguyen: ");
scanf("%d",&n);
printf("Nhap vao mot so nguyen khac: ");
scanf("%d",&m);
if(isprime(n)){
	printf("%d la so nguyen to\n",n);
}else{
	printf("%d khong phai la so nguyen to\n",n);
}
if(isprime(m)){
	printf("%d la so nguyen to\n",m);
}else{
	printf("%d khong phai la so nguyen to\n",m);
}
return 0;
}