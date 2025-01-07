#include<stdio.h>
#include<string.h>
void reverse(char *input,char *rev){
	int length = strlen(input);
	for(int  i = 0;i < length;i++){
		rev[i] = input[length - i - 1];
	}
	rev[length] = '\0';
}
int main(){
	char input[100];
	char rev[100];
	printf("Nhap chuoi:");
	fgets(input,sizeof(input),stdin);
	//input[strcspn(input,"\n")] = '\0';
	reverse(input,rev);
	printf("Chuoi goc:%s\n",input);
	printf("Chuoi sau khi duoc dao nguoc:%s\n",rev);
}