// 1. Dengan menggunakan pernyataan break, buatlah program yang dapat
// menampilkan semua karakter yang diketikkan dan program berakhir ketika
// ditekan tombol Enter.

#include <stdio.h>

int main() {
    int karakter;

    printf("Ketik karakter dan tekan Enter untuk selesai: ");
    while (1) {
        karakter = getchar();
        if (karakter == '\n') {
            break;
        }
        printf("%c", karakter);
    }

    return 0;
}
