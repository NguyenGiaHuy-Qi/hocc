#include<stdio.h>
#include<string.h>
int main(){
	char c[] = "BeXuanMaiLonTon";
	char d;
	int found = 0;
	printf("Nhap ki tu de check: ");
	scanf("%c",&d);
	for(int  i = 0;i < strlen(c);i++){
		if(d == c[i]){
			found++;
		}
	}
	printf("Xuat hien %d ki tu trong mang",found);
	return 0;
}