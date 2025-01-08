#include<stdio.h>
#include<string.h>
#include<ctype.h>
void input(char *str);
void print(char *str);
void count(char *str,int *letters,int *digits,int *special);
int main(){
	char str[100];
	int choice,letters,digits,special;
	do{
		printf("MENU\n");
		printf("1.Nhap vao chuoi\n");
		printf("2.In chuoi\n");
		printf("3.Dem so luong chu cai\n");
		printf("4.Dem so luong chu so\n");
		printf("5.Dem so luong ki tu dac biet\n");
		printf("6.Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				input(str);
				break;
			}
			case 2:{
				print(str);
				break;
			}
			case 3:{
				count(str,&letters,&digits,&special);
				printf("So luong ki tu trong chuoi la %d\n",letters);
				break;
			}
			case 4:{
				count(str,&letters,&digits,&special);
				printf("So luong chu so trong chuoi la %d\n",digits);
				break;
			}
			case 5:{
				count(str,&letters,&digits,&special);
				printf("So luong ki tu dac biet trong chuoi la %d\n",special);
				break;
			}
			case 6:{
				printf("Thoat chuong trinh");
				break;
			}
		}
	}while(choice != 6);
	return 0;
}
void input(char *str){
	printf("Nhap chuoi:");
	scanf("%s",str);
};
void print(char *str){
	printf("Chuoi hien tai:%s\n",str);
};
void count(char *str,int *letters,int *digits,int *special){
	*letters = 0;
	*digits = 0;
	*special = 0;
	while(*str){
		if(isalpha(*str)){
			(*letters)++;
		}else if(isalnum(*str)){
			(*digits)++;
		}else if(!isspace(*str)){
			(*special)++;
		}
		str++;
	}
}