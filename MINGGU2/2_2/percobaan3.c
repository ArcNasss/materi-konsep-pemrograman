#include <stdio.h>

int main(){
    float gaji;
    float tunjanganIstriSuami = 10 / 100.0;
    int jumlahAnak;
    float tunjanganAnak = 5 / 100.0;
    float THR = 5000;
    int lama_kerja;
    float pajak;

    float bantuanTransport = 3000;
    float jumlahMasuk;
    float polisAsuransi = 20000;


    printf("masukkan gaji pokok:\n");
    scanf("%f", &gaji);
    printf("masukkan jumlah anak:\n");
    scanf("%d", &jumlahAnak);
    printf("masukkan tahun lama kerja:\n");
    scanf("%d", &lama_kerja);
    printf("masukkan jumlah masuk kantor:\n");
    scanf("%f", &jumlahMasuk);


    float totalTunjanganIstriSuami = gaji * tunjanganIstriSuami;
    float totalTunjanganAnak = gaji * tunjanganAnak * jumlahAnak;
    float totalTHR = THR * lama_kerja;
    float totalBantuanTransport = bantuanTransport * jumlahMasuk;
    float totalPajak = (gaji + totalTunjanganIstriSuami + totalTunjanganAnak ) * 15 / 100.0;
    
    float totalGaji = gaji + totalTunjanganIstriSuami + totalTunjanganAnak + totalTHR + totalBantuanTransport - totalPajak - polisAsuransi;

    printf("Total Gaji: %.2f\n", totalGaji);
    return 0;
}