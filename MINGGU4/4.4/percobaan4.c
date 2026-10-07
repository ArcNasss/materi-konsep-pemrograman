// 4. Dengan menggunakan pernyataan nested loop, tampilkan bilangan:
// 0 1 3 6 10 15 21 28 ... sampai suku ke-n.
// Pada akhir program, tanyakan apakah ingin keluar (y/t).

#include <stdio.h>

int main() {
    int n, suku, bilangan, hasil;
    char keluar;

    do {
        printf("Masukkan jumlah suku: ");
        scanf("%d", &n);

        for (suku = 0; suku < n; suku++) {
            hasil = 0;
            for (bilangan = 0; bilangan <= suku; bilangan++) {
                hasil += bilangan;
            }
            printf("%d ", hasil);
        }
        printf("\n");

        printf("Apakah anda ingin keluar (y/t)? ");
        scanf(" %c", &keluar);
        while (keluar != 'y' && keluar != 't') {
            printf("Jawaban hanya boleh y atau t: ");
            scanf(" %c", &keluar);
        }
    } while (keluar != 'y');

    return 0;
}
