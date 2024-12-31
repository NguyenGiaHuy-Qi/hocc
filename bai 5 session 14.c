#include<stdio.h>
#include<string.h>
int countword(char c[]){
	int count = 0;
	int word = 0;
	int length = strlen(c);
	for(int i = 0;i<length;i++){
		if(c[i] != ' ' && word == 0){
			word = 1;
			count++;
		}else if(c[i] == ' '){
			word = 0;
		}
	}
	return count;
}
int main(){
	char c[100] = "hello world";
	int wc = countword(c);
	printf("%d",countword(c));
}