#include <stdio.h>

int main() {

  
    int data[15] = {8, 10, 6, -2, 11, 7, 1, 100,12,13,14,15,16,17,18};
    int cari;
    int flag = 0;

    printf("Masukkan data yang ingin dicari = ");
    scanf("%d", &cari);

    for (int i = 0; i < 15; i++) {
        if (data[i] == cari) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) 
        printf("Data Ada!\n");
    else 
        printf("Data Tidak Ada!\n");

}
