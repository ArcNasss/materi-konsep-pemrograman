// 1. Gunakan loop while untuk membuat program yang dapat menampilkan semua
// karakter yang diketikkan di keyboard sampai yang diketikkan pada keyboard
// huruf 'X' (X besar).

#include <stdio.h>

int main() {
    int karakter;

    printf("Ketik karakter (akhiri dengan X): ");
    karakter = getchar();

    while (karakter != 'X') {
        printf("%c", karakter);
        karakter = getchar();
    }

    return 0;
}
