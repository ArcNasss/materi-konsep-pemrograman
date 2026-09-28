// 2. Dengan menggunakan pernyataan continue, buatlah program yang dapat
// menampilkan bilangan ganjil dari 1 sampai < n (n diinputkan), kecuali
// bilangan ganjil tersebut kelipatan 3.

#include <stdio.h>

int main() {
    int n, bilangan;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (bilangan = 1; bilangan < n; bilangan++) {
        if (bilangan % 2 == 0) {
            continue;
        }
        if (bilangan % 3 == 0) {
            continue;
        }
        printf("%d ", bilangan);
    }
    printf("\n");

    return 0;
}
