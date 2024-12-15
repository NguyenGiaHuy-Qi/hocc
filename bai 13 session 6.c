#include<stdio.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int a = 0,b = 1,stt;
	printf("%d so dau tien trong day so fibonacci la: ",n);
	for(int i = 1;i <=n;i++){
		printf("%d ",a);
		stt = a + b;
		a = b;
		b = stt;
	}return 0;
}