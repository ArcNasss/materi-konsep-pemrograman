// Tentukan harga fotokopi dengan aturan:

// - Jika pelanggan -> harga tetap Rp. 75
// - Jika bukan pelanggan, harga berdasarkan jumlah lembar:
//   - < 100 lembar -> Rp. 150
//   - 100 - 200 lembar -> Rp. 100
//   - > 200 lembar -> Rp. 80

// Menggunakan else-if

#include <stdio.h>

int main(void) {
    int pelanggan;
    int jumlah_lembar;
    int harga_per_lembar;
    int total_harga;

    printf("Apakah Anda pelanggan? (1 = Ya, 0 = Tidak): ");
    scanf("%d", &pelanggan);

    printf("Masukkan jumlah lembar fotokopi: ");
    scanf("%d", &jumlah_lembar);
    if(pelanggan) {
        harga_per_lembar = 75;
    } else {
        if(jumlah_lembar < 100) {
            harga_per_lembar = 150;
        } else if(jumlah_lembar <= 200) {
            harga_per_lembar = 100;
        } else {
            harga_per_lembar = 80;
        }
    }

    total_harga = jumlah_lembar * harga_per_lembar;

    puts("\nHasil Perhitungan:");
    printf("Harga per lembar : Rp %d\n", harga_per_lembar);
    printf("Total yang dibayar: Rp %d\n", total_harga);

    return 0;
}