#include<stdio.h>
int main(){
	int arr[6] = {1,2,3,4,5,2};
	int n;
	int count = 0;
	int pos[6];
	printf("Nhap so can tim: ");
	scanf("%d",&n);
	for(int i = 0;i < 6;i++){
		if(arr[i] == n){
			pos[count] = i;
			count++;
		}
	}
	if(count > 0){
		for(int i = 0;i < count;i++){
			printf("So %d o vi tri:%d\n",n,pos[i]);
		}
	}else{
		printf("Khong tim thay");
	}
	return 0;
	}