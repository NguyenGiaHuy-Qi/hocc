#include <stdio.h>
#include <string.h>

struct SinhVien{
	char name[100];
	int age;
	char phoneNumber[100];
};

typedef struct SinhVien SinhVien;

int main(){
	SinhVien x;
	strcpy(x.name,"Nguyen Gia Huy");
	x.age=19;
	strcpy(x.phoneNumber,"0344488306");
	
	printf("Ten: %s\n",x.name);
	printf("Tuoi: %d\n",x.age);
	printf("Sdt: %s",x.phoneNumber);
}
