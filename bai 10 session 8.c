#include<stdio.h>
int main(){
	int  a[8] = {1,5,2,3,23,5,1,2};
	int maxcount = 0;
	int mostappear[8];
	int mostcount = 0;
	for(int i = 0;i < 8;i++){
		int count = 0;
		for(int j = 0;j < 8;j++){
			if(a[j] == a[i]){
				count++;
			}
		}
		if(count > maxcount){
			maxcount = count;
			mostcount = 0;
			mostappear[mostcount++] = a[i];
		}else if(count == maxcount){
			int existed = 0;
			for(int m = 0;m < mostcount; m++){
				if(mostappear[m] == a[i]){
					existed = 1;
					break;
				}
			}
			if(existed == 0){
				mostappear[mostcount++] =a[i];
			}
		}
	}
	printf("Cac phan tu xuat hien nhieu nhat la: ");
	for(int i = 0;i<mostcount;i++){
		printf("%d ",mostappear[i]);
	}
	return 0;
}