#include<stdio.h>
#include<math.h>
int ucln(int a,int b){
	while( b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main(){
	printf("Uoc chung lon nhat la: %d",ucln(20,15));
	return 0;
}