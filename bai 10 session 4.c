#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap 3 so nguyen: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		int t = a;a=b;b=t;
	}if(a>c){
		int t= a;a=c;c=t;
	}if(b>c){
		int t=b;b=c;c=t;
	}printf("so theo thu tu tu be den lon la %d %d %d",a,b,c);
	return 0;
}