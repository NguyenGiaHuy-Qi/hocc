#include<stdio.h>
int main(){
int n;
int found = 0;
int arr[5] = {2,4,6,8,10};
printf("Nhap vao gia tri bat ki: ");
scanf("%d",&n);
for(int i = 0;i < 5;i++){
	if(n == arr[i]){
		found = 1;
		printf("Gia tri o vi tri %d",i + 1);
	}
	}if(found == 0){
		printf("Khong tim thay");}                         
return 0;
}