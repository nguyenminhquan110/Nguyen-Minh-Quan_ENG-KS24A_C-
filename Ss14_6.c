#include<stdio.h>

int main(){
	char chuoi[]= "Xin chao";
	
	int n = sizeof(chuoi)/sizeof(char);
	printf("%d\n",n);
	for(int i = 0;i < n; i++){
		printf("ki tu thu %d la: %c\n",i+1,chuoi[i]);
	}
	
	return 0;
}
