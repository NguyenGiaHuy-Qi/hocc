#include<stdio.h>
#include<string.h>
int main(){
	char c[] = "ohnnabolleh";
	int length = strlen(c);
	for(int i = length;i>= 0;i--){
		printf("%c",c[i]);
	}
	return 0;
}