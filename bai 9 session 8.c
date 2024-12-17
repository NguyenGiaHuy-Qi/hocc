#include<stdio.h>
int main(){
	int  a[8] = {1,2,3,4,1,4,2,1};
	int maxcount = 0;
	int mostappear;
	for(int i = 0;i < 8;i++){
		int count = 0;
		for(int j = 0;j < 8;j++){
			if(a[j] == a[i]){
				count++;
			}
		}
		if(count > maxcount){
			maxcount = count;
			mostappear = a[i];
		}
	}printf("Phan tu xuat hien nhieu nhat la %d",mostappear);
	return 0;
}