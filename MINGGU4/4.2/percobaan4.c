// 4. Gunakan while pada program yang digunakan untuk menghitung banyaknya
// karakter dari kalimat yang dimasukkan melalui keyboard (termasuk karakter
// spasi). Untuk mengakhiri pemasukan kalimat, tombol ENTER ('\\n') harus ditekan.
// Input : Ketikkan sembarang kalimat
// Output: jumlah karakter = m
//         jumlah spasi = n

#include <stdio.h>

int main() {
    int karakter;
    int jumlah_karakter = 0, jumlah_spasi = 0;

    printf("Ketikkan sembarang kalimat: ");
    karakter = getchar();

    while (karakter != '\n') {
        jumlah_karakter++;
        if (karakter == ' ') {
            jumlah_spasi++;
        }
        karakter = getchar();
    }

    printf("Jumlah karakter = %d\n", jumlah_karakter);
    printf("Jumlah spasi = %d\n", jumlah_spasi);

    return 0;
}
