// 4. Buatlah program untuk menerima daftar nilai mahasiswa.
// Input  : Jumlah data (n), nilai ke-1 sampai nilai ke-n.
// Output : Nilai minimal, nilai maksimal, dan nilai rata-rata.
// Petunjuk: Gunakan loop for dan seleksi kondisi dengan if.

#include <stdio.h>

int main() {
    int jumlah_data, data;
    float nilai, total = 0, minimum = 0, maksimum = 0, rata_rata;

    printf("Masukkan jumlah data: ");
    scanf("%d", &jumlah_data);

    for (data = 1; data <= jumlah_data; data++) {
        printf("Masukkan nilai ke-%d: ", data);
        scanf("%f", &nilai);

        total += nilai;
        if (data == 1) {
            minimum = nilai;
            maksimum = nilai;
        } else {
            if (nilai < minimum) {
                minimum = nilai;
            }
            if (nilai > maksimum) {
                maksimum = nilai;
            }
        }
    }

    rata_rata = total / jumlah_data;
    printf("Nilai minimal = %.2f\n", minimum);
    printf("Nilai maksimal = %.2f\n", maksimum);
    printf("Nilai rata-rata = %.2f\n", rata_rata);

    return 0;
}
