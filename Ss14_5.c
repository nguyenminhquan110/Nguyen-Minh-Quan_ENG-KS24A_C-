#include<stdio.h>

int main(){
	char chuoi[100]= "Xin chao the gioi";
    int flag = 0;

    printf("%s\n",chuoi);
    chuoi[strcspn(chuoi, "\n")] = '\0';

    flag++;
    for (int i = 0; chuoi[i] != '\0'; i++){
        if (chuoi[i] == ' '){
            flag++;
        }
    }
    printf("So tu trong chuoi la: %d\n", flag);

	return 0;
}
