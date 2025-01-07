#include<stdio.h>
int main(){
	int x = 10;
	int *ptr = &x;
	printf("%d\n",*ptr);
//	printf("%p\n",ptr);
	printf("%d\n",x);
//	printf("%p\n",&x);
	printf("%d\n",ptr);
	printf("%d\n",&x);
//	printf("%p",*ptr);
}