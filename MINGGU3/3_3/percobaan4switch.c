// 4. Buatlah program untuk menampilkan pilihan hari : 1 s/d 7 untuk pilihan Senin s/d
// Minggu. Selanjutnya, minta user utk memasukkan salah satu pilihan 1-7.
// Tampilkan nama hari yang terpilih (lihat contoh output)
// Implementasikan dengan menggunakan else-if dan switch case

#include <stdio.h>
int main() {
    int pilihan;
    printf("Masukkan pilihan hari yang anda inginkan \n 1. Senin \n 2. Selasa \n 3. Rabu \n 4. Kamis \n 5. Jumat \n 6. Sabtu \n 7. Minggu \n pilihan anda: ");
    scanf("%d", &pilihan);
    
    switch(pilihan) {
        case 1:
            printf("pilihan anda = Senin\n");
            break;
        case 2:
            printf("pilihan anda = Selasa\n");
            break;
        case 3:
            printf("pilihan anda = Rabu\n");
            break;
        case 4:
            printf("pilihan anda = Kamis\n");
            break;
        case 5:
            printf("pilihan anda = Jumat\n");
            break;
        case 6:
            printf("pilihan anda = Sabtu\n");
            break;
        case 7:
            printf("pilihan anda = Minggu\n");
            break;
        default:
            printf("Pilihan tidak valid! Silakan pilih angka antara 1-7.\n");
    }

    puts("Selesai");
    return 0;
}