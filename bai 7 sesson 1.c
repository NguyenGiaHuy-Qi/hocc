#include<stdio.h>
int main(){
	float a,b,kq;
	char x;
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b);
	printf("chon dau ban muon: ");
	scanf(" %c",&x);
	switch(x){
		case '+':
			kq = a + b;
			printf("Ket qua la %.2f",kq);
			break;
			case '-':
				kq = a - b;
				printf("Ket qua la %.2f",kq);
				break;
				case'*':
					kq = a * b;
					printf("Ket qua la %.2f",kq);
					break;
					case'/':
						if(b == 0){
							printf("chia vo li");
						}else{
							kq = a / b;
							printf("Ket qua la %.2f",kq);
						}break;
						default:
							printf("phep tinh ko hop le");
							return 0;
	}
}