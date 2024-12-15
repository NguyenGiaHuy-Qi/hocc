#include<stdio.h>
#include<math.h>
int main(){
	printf("Cac so Armstrong co 3 chu so la:");
	for(int i = 100;i < 1000;i++){
		int original = i;
		int sum = 0;
		int kitu1 = original % 10;
		int kitu2 = (original / 10) % 10;
		int kitu3 = original / 100;
		sum = pow(kitu1,3)+pow(kitu2,3)+pow(kitu3,3);
		if(sum == original){
			printf("%d ",original);
		}
	}return 0;
}