#include<stdio.h>
#include<string.h>
void removechar(char str[],char n){
	int length = strlen(str);
	int j = 0;
	for(int i = 0;i<length;i++){
		if(str[i] != n){
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
}
int main(){
	char str[100];
	char n;
	printf("Nhap chuoi: ");
	gets(str);
	printf("Nhap ki tu muon xoa:%c",n);
	scanf("%c",&n);
	removechar(str,n);
	printf("Chuoi sau khi xoa:%s\n",str);
	return 0;
}