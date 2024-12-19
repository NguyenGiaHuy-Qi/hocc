#include<stdio.h>
int main(){
	int choice;
	int n;
	int arr[100];
	int a = 100;
	do{
	printf("MENU\n");
	printf("1.Nhap mang\n");
	printf("2.Hien thi mang\n");
	printf("3.Them gia tri\n");
	printf("4.Sua gia tri\n");
	printf("5.Xoa gia tri\n");
	printf("6.Thoat\n");
	printf("Lua chon cua ban: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:{
        printf("Nhap so phan tu trong mang: ");
		scanf("%d",&n);
		for(int  i=0;i<n;i++){
			printf("Nhap phan tu %d: ",i+1);
		scanf("%d",&arr[i]);
		}
		break;
		}
		case 2:{
			printf("Mang hien tai: ");
			for(int i = 0;i<n;i++){
				printf("%d ",arr[i]);
			}printf("\n");
			break;
		}
		case 3:{
			if(n < a){
				int newval;
				printf("Nhap gia tri moi: ");
				scanf("%d",&newval);
				arr[n] = newval;
				n++;
			}
			break;
		}
		case 4:{
			int position;
			printf("Nhap vi tri ban muon sua: ");
			scanf("%d",&position);
			if(position > 0 && position < n){
				int newval;
				printf("Nhap gia tri moi: ");
				scanf("%d",&newval);
				arr[position] = newval;
				printf("Mang sau khi duoc doi gia tri la: ");
				for(int i = 0;i<n;i++){
				printf("%d ",arr[i]);
			}printf("\n");
			}
			break;
		}
		case 5:{
			int position;
			printf("Nhap vi tri ban muon xoa: ");
			scanf("%d",&position);
			if(position > 0 && position < n){
				for(int i = position;i<n-1;i++){
					arr[i] = arr[i+1];
					n--;
					printf("Mang sau khi duoc xoa gia tri la: ");
				for(int i = 0;i<n;i++){
				printf("%d ",arr[i]);
			}printf("\n");
				}
			}
			break;
		}
		case 6:{
			printf("Thooat chuong trinh");
			choice++;
			break;
		}
		}
	}while(choice <= 6);
	return 0;
}