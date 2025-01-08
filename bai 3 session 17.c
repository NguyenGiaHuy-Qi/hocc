#include<stdio.h>
#include<string.h>
#include<ctype.h>
void input(char *str);
void reverse(char *str);
int count(char *str);
void compare(char *str,char *str2);
void upper(char *str);
void add(char *str,char *str2);
int main(){
	char str[100],str2[100];
	int choice;
	do{
		printf("MENU\n");
		printf("1.Nhap vao chuoi\n");
		printf("2.In chuoi dao nguoc \n");
		printf("3.Dem so luong tu\n");
		printf("4.So sanh voi chuoi khac\n");
		printf("5.In hoa chu cai\n");
		printf("6.Them chuoi moi vao chuoi ban dau\n");
		printf("7.Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		getchar();
		switch(choice){
			case 1:{
				input(str);
				break;
			}
			case 2:{
				reverse(str);
				break;
			}
			case 3:{
				printf("So luong tu trong mang la %d",count(str));
				break;
			}
			case 4:{
				printf("Nhap chuoi khac:");
				input(str2);
				compare(str,str2);
				break;
			}
			case 5:{
				upper(str);
				printf("Chuoi in hoa la:%s\n",str);
				break;
			}
			case 6:{
				printf("Nhap chuoi khac:");
				input(str2);
				add(str,str2);
				printf("Chuoi sau khi them la %s\n",str);
				break;
			}
			case 7:{
				printf("Thoat chuong trinh");
				break;
			}
		}
	}while(choice != 7);
	return 0;
}
void input(char *str){
	printf("Nhap chuoi:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
};
void reverse(char *str){
	strrev(str);
	printf("Chuoi dao nguoc:%s\n",str);
};
int count(char *str){
	int count = 0;int word = 0;
	while(*str){
		if(isspace(*str)){
			word = 0;
		}else if(!word){
			word = 1;
			count++;
		}
		str++;
	}
	return count;
};
void compare(char *str,char *str2){
	int len1 = strlen(str);
	int len2 = strlen(str2);
	if(len1 < len2){
		printf("Dai hon chuoi ban dau\n");
	}else if(len1 > len2) {
		printf("Ngan hon chuoi ban dau\n");
	}else{
		printf("Hai chuoi bang nhau\n");
	}
};
void upper(char *str){
	while(*str){
		*str = toupper(*str);
		str++;
	}
};
void add(char *str,char *str2){
	strcat(str,str2);
};