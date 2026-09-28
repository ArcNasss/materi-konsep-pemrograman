// 2. Hitunglah bilangan triangular dari masukan pengguna, yang dibaca dari keyboard
// dengan menggunakan scanf(). Bilangan triangular adalah penjumlahan dari bilangan
// masukan dengan seluruh bilangan sebelumnya, sehingga bilangan triangular dari 7
// adalah : 7 + 6 + 5 + 4 + 3 + 2 + 1

#include <stdio.h>

int main() {
    int bilangan, triangular = 0;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    for (; bilangan >= 1; bilangan--) {
        triangular += bilangan;
    }

    printf("Bilangan triangular: %d\n", triangular);

    return 0;
}
