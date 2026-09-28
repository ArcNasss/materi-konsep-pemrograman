// 2. Gunakan loop while untuk membuat program yang dapat mencari total angka
// yang dimasukkan dengan tampilan sebagai berikut:
// Masukkan bilangan ke-1 : 5
// Mau memasukkan data lagi [y/t] ? y
// Masukkan bilangan ke-2 : 3
// Mau memasukkan data lagi [y/t] ? t
// Total bilangan = 8

#include <stdio.h>

int main() {
    int bilangan, total = 0, nomor = 1;
    char lanjut = 'y';

    while (lanjut == 'y' || lanjut == 'Y') {
        printf("Masukkan bilangan ke-%d : ", nomor);
        scanf("%d", &bilangan);
        total += bilangan;
        nomor++;

        printf("Mau memasukkan data lagi [y/t] ? ");
        scanf(" %c", &lanjut);
    }

    printf("Total bilangan = %d\n", total);

    return 0;
}
