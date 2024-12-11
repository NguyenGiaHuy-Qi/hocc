#include<stdio.h>
int main(){
	float n,m;
	char c;
	printf("Nhap so dau tien: ");
	scanf("%f",&n);
	printf("Nhap so the hai: ");
	scanf("%f",&m);
	do{
	printf("%20s","CACULATOR\n");
	printf("1.Tong 2 so\n");
	printf("2.Hieu 2 so\n");
	printf("3.Tich 2 so\n");
	printf("4.Thuong 2 so\n");
	printf("5.Thoat\n");
	printf("Lua chon cua ban: ");
	  while(getchar() != '\n');	 	
	c = getchar();
	getchar();
	if(c == '1'){
		printf("Tong cua 2 so la %.2f",n + m);
	}else if(c == '2'){
		printf("Hieu cua 2 so la %.f",n - m);
}else if(c == '3'){
	printf("Tich cua 2 so la %.2f",n * m);
}else if(c == '4'){
	printf("Thuong cua 2 so la %.2f",n / m);
}else if(c == '5'){
	printf("OK BYE");
}}while (c !='5');
	return 0;
}