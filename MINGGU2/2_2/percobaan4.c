#include <stdio.h>

int main(){
    int hargaTiket = 50000;
    int jumlahTiket;
    int jumlahPaket;
    int sisaTiket;
    int totalBayar;

    printf("Masukkan jumlah tiket yang dibeli: ");
    scanf("%d", &jumlahTiket);

    jumlahPaket = jumlahTiket / 3;
    sisaTiket = jumlahTiket % 3;

    totalBayar = jumlahPaket * (2 * hargaTiket) + sisaTiket * hargaTiket;

    printf("Biaya yang harus dibayar = Rp %d,-\n", totalBayar);

    return 0;
}