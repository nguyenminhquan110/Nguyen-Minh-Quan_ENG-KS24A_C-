#include <stdio.h>
#include <string.h>
int main(){
	char text[] = "Hello world" ;
	int lenght = strlen(text);
	int count = 0;
	
	char ch ;
	printf("\nNhap 1 ki tu bat ki: ");
	scanf("%c", &ch);
	
	for ( int i =0; i< lenght; i++){
		if ( ch == text[i] ){
			count++;
			for ( int j = i ; j< lenght-1; j++){
				text[j] = text[j+1];
			}
			text[lenght-1] = '\0' ;
			lenght--;
			i--;
		}
	}
	if ( count == 0 ){
		printf("\n Phan tu %c khong co trong chuoi!");
	}else{
		printf("\n kq: %s", text);
	}
	
	return 0;
}
