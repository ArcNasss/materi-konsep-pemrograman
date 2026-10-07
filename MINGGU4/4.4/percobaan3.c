// 3. Dengan menggunakan pernyataan nested loop, tampilkan bilangan prima
// sampai bilangan prima ke-n.
// Pada akhir program, tanyakan apakah ingin keluar (y/t).

#include <stdio.h>

int main() {
    int n, bilangan, pembagi, jumlah_prima;
    int bukan_prima;
    char keluar;

    do {
        printf("Masukkan bilangan prima ke-n: ");
        scanf("%d", &n);

        jumlah_prima = 0;
        bilangan = 2;
        while (jumlah_prima < n) {
            bukan_prima = 0;
            for (pembagi = 2; pembagi < bilangan; pembagi++) {
                if (bilangan % pembagi == 0) {
                    bukan_prima = 1;
                    break;
                }
            }

            if (bukan_prima == 0) {
                printf("%d ", bilangan);
                jumlah_prima++;
            }
            bilangan++;
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
