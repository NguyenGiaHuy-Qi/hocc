#include<stdio.h>
#include<math.h>
#define MAX 100
int arr[MAX];
int n,pos;
void input();
void print();
void insert();
void change();
void del();
void menu();
void linearSearch();
void binarySearch();
void menu2();
int main(){
	int lua;
	do{
		printf("Menu\n");
		printf("1.Nhap phan tu va cac gia tri\n");
		printf("2.In ra\n");
		printf("3.Them gia tri\n");
		printf("4.Sua gia tri\n");
		printf("5.Xoa gia tri\n");
		printf("6.Sap xep\n");
		printf("7.Tim kiem\n");
		printf("8.Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&lua);
		switch(lua){
			case 1:{
				input();
				break;
			}
			case 2:{
				print();
				break;
			}
			case 3:{
				insert();
				break;
			}
			case 4:{
				change();
				break;
			}
			case 5:{
				del();
				break;
			}
			case 6:{
				menu();
				break;
			}
			case 7:{
				menu2();
				break;
			}
			case 8:{
				printf("Thoat chuong trinh\n");
				break;
			}
			
		}
	}while(lua != 8);
	return 0;
}
void input(){
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		printf("Array[%d]:",i+1);
		scanf("%d",&arr[i]);
	}
};
void print(){
	printf("Cac phan tu dang quan li:\n");
	for(int i = 0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
};
void insert(){
	int a;
	printf("Nhap phan tu muon them: ");
	scanf("%d",&a);
	printf("Nhap vi tri chi dinh: ");
	scanf("%d",&pos);
	for(int i = n;i >= pos;i--){
		arr[i] = arr[i-1];
	}
	arr[pos-1] = a;
	++n;
};
void change(){
	int newval;
	printf("Nhap vi tri muon sua: ");
	scanf("%d",&pos);
	printf("Gia tri moi: ");
	scanf("%d",&newval);
	arr[pos-1] = newval;
};
void del(){
	int b;
	printf("Nhap phan tu can xoa: ");
	scanf("%d",&b);
	int found = 0;
	for(int i = 0;i <n;i++){
		if(arr[i] == b){
			found = 1;
			for(int j = i;j<n-1;j++){
				arr[j] = arr[j+1];
			}
			--n;
			break;
		}
	}
	if(!found){
		printf("Khong tim thay gia tri\n");
	}
};
void menu(){
	int choice;
	do{
		printf("1.Tang dan\n");
		printf("2.Giam dan\n");
		printf("3.Thoat\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				for(int i = 0;i<n-1;i++){
				for(int j =0;j<n-i-1;j++){
					if(arr[j]>arr[j+1]){
						int temp = arr[j];
						arr[j] = arr[j+1];
						arr[j+1] = temp;
					}
				}
			}
				break;
			}
			
		case 2:{
			for(int i = 0;i<n-1;i++){
				for(int j = 0 ;j<n-i-1;j++){
					if(arr[j]<arr[j+1]){
						int temp = arr[j];
						arr[j] = arr[j+1];
						arr[j+1] = temp;
					}
				}
			}
			break;
		}
		case 3:{
			printf("Quay lai menu chinh.\n");
			break;
		}
	}
	}while(choice != 3);
};
void linearSearch() {
    int key;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &key);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Phan tu %d duoc tim thay tai vi tri %d.\n", key, i + 1);
            return;
        }
    }
    printf("Phan tu %d khong ton tai trong mang.\n", key);
};

void binarySearch() {
    int key;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &key);
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            printf("Phan tu %d duoc tim thay tai vi tri %d.\n", key, mid + 1);
            return;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("Phan tu %d khong ton tai trong mang.\n", key);
};
void menu2(){
int choice2;
do {
        printf("\nMenu Tim Kiem:\n");
        printf("1.Tim kiem tuyen tinh\n");
        printf("2.Tim kiem nhi phan\n");
        printf("3.Quay lai menu chinh\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice2);
        switch (choice2) {
            case 1:
                linearSearch();
                break;
            case 2:
                binarySearch();
                break;
            case 3:
                printf("Quay lai menu chinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice2 != 3);
};