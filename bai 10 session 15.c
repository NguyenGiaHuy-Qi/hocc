#include<stdio.h>
#include<string.h>
void countchar(char str[]){
	int freq[256] ={0};
	for(int i = 0;i<strlen(str);i++){
		freq[(unsigned char)str[i]]++;
	}
	for(int i =0;i<256;i++){
		if(freq[i] != 0){
			printf("%c: %d\n",i,freq[i]);
		}
	}
}
int main(){
	char str[100];
	printf("Nhap bua di:");
	gets(str);
	countchar(str);
	return 0;
}