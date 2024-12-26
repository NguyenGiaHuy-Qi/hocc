#include<stdio.h>
int main(){
	int arr[] = {1,23,321,123,43,5,3,7,9,45,65};
	int n = sizeof(arr)/sizeof(arr[0]);
	int found = 0,m;
	printf("Nhap so can tim: ");
	scanf("%d",&m);
	for(int i = 0;i < n - 1;i++){
		int min = i;
		for(int j = i + 1;j < n;j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
		if(arr[i] == m){
			found = 1;
		printf("Gia tri can tim o vi tri: %d",i+1);
	}
	}
	printf("\nMang theo thu tu tang dan la: ");
	for(int i = 0;i< n;i++ ){
		printf("%d ",arr[i]);
	}
	if(found == 0){
		printf("\nKhong ton tai");
	}return 0;
}