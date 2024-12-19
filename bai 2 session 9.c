#include<stdio.h>
int main(){
	int arr[] ={1,2,3,4};
	int a = sizeof(arr)/sizeof(arr[0]);
	printf("Mang ban dau: ");
	for(int i=0;i<a;i++){
		printf("%d ",arr[i]);
	}
	int position,newvarible;
	printf("\nNhap vi tri can sua: ");
	scanf("%d",&position);
	if(position > 0 && position <= a){
		printf("Nhap gia tri moi: ");
		scanf("%d",&newvarible);
		arr[position] = newvarible;
		printf("\nMang sau khi duoc sua: ");
		for(int i = 0;i<a;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}else{
			printf("vi tri ko hop le");
	}return 0;
}