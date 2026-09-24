// 4. Buatlah program untuk menampilkan pilihan hari : 1 s/d 7 untuk pilihan Senin s/d
// Minggu. Selanjutnya, minta user utk memasukkan salah satu pilihan 1-7.
// Tampilkan nama hari yang terpilih (lihat contoh output)
// Implementasikan dengan menggunakan else-if dan switch case

#include <stdio.h>
int main() {
    int pilihan;
    printf("Masukkan pilihan hari yang anda inginkan \n 1. Senin \n 2. Selasa \n 3. Rabu \n 4. Kamis \n 5. Jumat \n 6. Sabtu \n 7. Minggu \n pilihan anda: ");
    scanf("%d", &pilihan);
    
    if (pilihan == 1) {
        printf("pilihan anda = Senin\n");
    } else if (pilihan == 2) {
        printf("pilihan anda = Selasa\n");
    } else if (pilihan == 3) {
        printf("pilihan anda =  Rabu\n");
    } else if (pilihan == 4) {
        printf("pilihan anda =  Kamis\n");
    } else if (pilihan == 5) {
        printf("pilihan anda = Jumat\n");
    } else if (pilihan == 6) {
        printf("pilihan anda = Sabtu\n");
    } else if (pilihan == 7) {
        printf("pilihan anda = Minggu\n");
    } else {
        printf("Pilihan tidak valid! Silakan pilih angka antara 1-7.\n");
    }
    
    puts("Selesai");
    return 0;
}