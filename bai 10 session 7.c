#include<stdio.h>
#include<math.h>
int isprime(int n){
	if(n<2)
	return 0;
	for(int i = 2;i<=sqrt(n);i++){
		if(n % i == 0)
		return 0;
	}
	return 1;
}
int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int arr[n];
	printf("nhap tung phan tu trong mang:\n");
	for(int i = 0;i<n;i++){
		printf("Phan tu thu %d: ",i + 1);
		scanf("%d",&arr[i]);
	}
	printf("Cac phan tu la so nguyen to: ");
	for(int i = 0;i <= n; i++){
		if(isprime(arr[i])){
			printf("%d",arr[i]);
		}
	}return 0;
}