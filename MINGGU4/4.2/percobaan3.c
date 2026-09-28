// 3. Pada program no. 2 tambahkan rata-rata, maksimum dan minimum dari angka
// yang dimasukkan.

#include <stdio.h>

int main() {
    int bilangan, total = 0, jumlah_data = 0;
    int maksimum = 0, minimum = 0;
    char lanjut = 'y';
    float rata_rata;

    while (lanjut == 'y' || lanjut == 'Y') {
        printf("Masukkan bilangan ke-%d : ", jumlah_data + 1);
        scanf("%d", &bilangan);

        total += bilangan;
        if (jumlah_data == 0) {
            maksimum = bilangan;
            minimum = bilangan;
        } else {
            if (bilangan > maksimum) {
                maksimum = bilangan;
            }
            if (bilangan < minimum) {
                minimum = bilangan;
            }
        }
        jumlah_data++;

        printf("Mau memasukkan data lagi [y/t] ? ");
        scanf(" %c", &lanjut);
    }

    rata_rata = (float) total / jumlah_data;
    printf("Total bilangan = %d\n", total);
    printf("Rata-rata = %.2f\n", rata_rata);
    printf("Maksimum = %d\n", maksimum);
    printf("Minimum = %d\n", minimum);

    return 0;
}
