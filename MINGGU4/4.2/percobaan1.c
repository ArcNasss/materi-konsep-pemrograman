// 1. Gunakan loop while untuk membuat program yang dapat menampilkan semua
// karakter yang diketikkan di keyboard sampai yang diketikkan pada keyboard
// huruf 'X' (X besar).

#include <stdio.h>

int main() {
    int karakter;

    printf("Ketik karakter dan tekan X untuk selesai: ");
    karakter = getchar();
    while (karakter != 'X') {
        putchar(karakter);
        getchar();
        printf("\nMasukkan karakter berikutnya: ");
    }
    printf("\nProgram selesai.\n");

    return 0;
}
