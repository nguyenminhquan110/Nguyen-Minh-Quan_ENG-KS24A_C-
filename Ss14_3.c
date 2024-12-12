#include <stdio.h>


int main(){
    char chuoi[100] = "Xin chao cac ban";
    int n = strlen(chuoi);
    
    for(int i = n;i >= 0;i--){
    	printf("%c",chuoi[i]);
	}

    return 0;
}

