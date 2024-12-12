#include <stdio.h>

int main(){
    char chuoi[50] = "Xin chao cac ban";
    int i, doDai;

    doDai = strlen(chuoi);

    for (i = 0; i < doDai; i++){
        printf("%c ",chuoi[i]);
    }

    printf("\n");
    return 0;
}
