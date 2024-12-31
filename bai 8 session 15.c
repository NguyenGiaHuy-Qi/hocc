#include<stdio.h>
#include<string.h>
void capital(char str[]){
	int length = strlen(str);
	for(int i = 0;i<length;i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			if(i == 0 || str[i-1] == ' '){
				continue;
			}
		}else if(str[i] >= 'a' && str[i] <= 'z'){
			if(i == 0 || str[i-1] == ' '){
				str[i] = str[i]-'a'+'A';
			}
		}
	}
}
int main(){
	char str[100] = "hello world";
	printf("Chuoi ban dau: %s\n",str);
	capital(str);
	printf("Chuoi sau:%s\n",str);
	return 0;
}