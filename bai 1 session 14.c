#include<stdio.h>
#include<string.h>
#define max 100
int main(){
	char str[max];
	printf("Nhap mot chuoi: ");
	scanf("%s",str);
	printf("%s\n",str);
	printf("%d\n",strlen(str));
	return 0;
}