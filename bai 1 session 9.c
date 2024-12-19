#include<stdio.h>
int main(){
	int arr[100];
	int n,value,addindex;
	int currentlength = 0;
	printf("Nhap so phan tu ban muon nhap(toi da 100): ");
	scanf("%d",&n);
	if(n > 100){
		n = 100;
	}
	currentlength = n;
	for(int i = 0;i < currentlength;i++){
		printf("Nhap phan tu thu %d: ",i + 1);
		scanf("%d",&arr[i]);
	}
	printf("Nhap phan tu ban muon chen: ");
	scanf("%d",&value);
	printf("Nhap vi tri ban muon chen: ");
	scanf("%d",&addindex);
	if(addindex > 0 && addindex <= currentlength){
		arr[addindex] = value;
		currentlength++;
	}
	printf("Mang sau khi chen la: ");
	for(int i = 0;i < currentlength;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}