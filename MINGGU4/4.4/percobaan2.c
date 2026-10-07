// 2. Dengan menggunakan pernyataan nested loop, buatlah program berikut:
// Input : n
// Output: 1, 2 2, 3 3 3, ... n sebanyak n baris.
// Pada akhir program, tanyakan apakah ingin keluar (y/t).

#include <stdio.h>

int main() {
    int n, baris, kolom;
    char keluar;

    do {
        printf("Masukkan nilai n: ");
        scanf("%d", &n);

        for (baris = 1; baris <= n; baris++) {
            for (kolom = 1; kolom <= baris; kolom++) {
                printf("%d ", baris);
            }
            printf("\n");
        }

        printf("Apakah anda ingin keluar (y/t)? ");
        scanf(" %c", &keluar);
        while (keluar != 'y' && keluar != 't') {
            printf("Jawaban hanya boleh y atau t: ");
            scanf(" %c", &keluar);
        }
    } while (keluar != 'y');

    return 0;
}
