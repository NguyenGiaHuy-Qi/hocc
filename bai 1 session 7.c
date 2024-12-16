#include<stdio.h>
int main(){
	int b[] = {1,2,3,4,5,6};
	int length = sizeof(b)/sizeof(b[0]);
	for(int i = 0;i < length;i++){
		printf("%d ",b[i]);
	}printf("\nDo dai cua mang la: %d",length);
	return 0;
}