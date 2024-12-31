#include<stdio.h>
#include<string.h>
int countletters(char str[]){
	int count = 0;
	for(int i = 0;i< strlen(str);i++){
		if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'){
			count++;
		}
	}
	return count;
}
int main(){
	char str[100];
	printf("Nhap vao mot chuoi: ");
	gets(str);
	int countletter = countletters(str);
	printf("So ki tu la chu cai la %d",countletter);
	return 0;
}