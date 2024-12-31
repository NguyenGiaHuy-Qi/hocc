#include<stdio.h>
#include<string.h>
int main(){
	char c[12] = "Helloskibidi";
	for(int i =0;c[i] != '\0';i++){
		printf("%c ",c[i]);
	}
	return 0;
}