// 3. Dengan menggunakan pernyataan break dan continue, buatlah program
// dengan input n dan output bilangan ganjil kecuali kelipatan 7 dan 11,
// mulai dari 1 sampai < n atau bilangan tersebut < 100.

#include <stdio.h>

int main() {
    int n, bilangan;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (bilangan = 1; ; bilangan++) {
        if (bilangan >= n || bilangan >= 100) {
            break;
        }
        if (bilangan % 2 == 0) {
            continue;
        }
        if (bilangan % 7 == 0 || bilangan % 11 == 0) {
            continue;
        }
        printf("%d ", bilangan);
    }
    printf("\n");

    return 0;
}
