#include <stdio.h>

int main(){
    char chuoi[100]= "Xin chao cac ban";
    char kyTu;
    int flag = 0;

    printf("%s\n",chuoi);
    printf("Nhap vao mot ky tu: ");
    scanf(" %c", &kyTu); 

    for (int i = 0; chuoi[i] != '\0'; i++){
        if (chuoi[i] == kyTu){
            flag++;
        }
    }

    printf("So lan xuat hien cua ky tu %c la: %d\n", kyTu, flag);

    return 0;
}
