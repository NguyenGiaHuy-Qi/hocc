#include<stdio.h>
#include<string.h>
int lettercount = 0;
int digitcount = 0;
int specialcount = 0;
void countstring(char str[]){
	lettercount = 0;
	digitcount = 0;
	specialcount = 0;
	for(int i = 0;i< strlen(str);i++){
		if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'){
			lettercount++;
		}else if( str[i] >= '0' && str[i] <= '9'){
			digitcount++;
		}else{
			specialcount++;
		}
	}
}
int main(){
	char str[100];
	printf("Nhap vao mot chuoi: ");
	gets(str);
	countstring(str);
	printf("So ki tu la chu cai la %d\n",lettercount);
	printf("So ki tu la so la %d\n",digitcount);
	printf("So ki tu la ki tu dac biet la %d\n",specialcount);
	return 0;
}