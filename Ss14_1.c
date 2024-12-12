#include <stdio.h>


int main(){
    char chuoi[50];
    int n = sizeof(chuoi)/sizeof(char);

    printf("Nhap mot chuoi bat ky: ");
    fgets(chuoi,n, stdin);

    chuoi[strcspn(chuoi,"\n")] = '\0';

    printf("Chuoi vua nhap la: %s\n",chuoi);

    int doDai = strlen(chuoi);
    printf("Do dai  cua chuoi la: %d\n",doDai);

    return 0;
}

