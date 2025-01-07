#include<stdio.h>
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a = 1;
	int b = 2;
	printf("Truoc khi hoan doi:a = %d ,b = %d\n",a,b);
	swap(&a,&b);
	printf("Sau khi hoan doi:a = %d ,b = %d\n",a,b);
}