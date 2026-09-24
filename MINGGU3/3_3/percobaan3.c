// 3. Buatlah program untuk menampilkan menu dan melakukan proses sbb :
// Menu : 1. Menghitung volume kubus
// 2. Menghitung luas lingkaran
// 3. Menghitung volume silinder.
// Input : pilihan user (1, 2 atau 3)
// Jika pilihan = 1, maka :
// Input : panjang sisi kubus
// Output : Volume kubus (vol = sisi3
// )

// Jika pilihan = 2, maka :
// Input : panjang jari-jari lingkaran
// Output : Luas lingkaran (luas = 3.14 * r2
// )

// Jika pilihan = 3, maka :
// Input : panjang jari-jari lingkaran & tinggi silinder
// Output : Volume silinder (vol = 3.14 * r2 * t)
// Jika pilihan selain 1, 2 & 3 (default) : Tampilkan pesan kesalahan.

// // Petunjuk : gunakan switch-case

#include <stdio.h>
#define  PI 3.14f
int main(){
    int pilihan;
    float sisi, jari_jari, tinggi, volume_kubus, luas_lingkaran, volume_silinder;
    
    printf("Menu :\n");
    printf("1. Menghitung volume kubus\n");
    printf("2. Menghitung luas lingkaran\n");
    printf("3. Menghitung volume silinder\n");
    printf("Masukkan pilihan (1, 2 atau 3): ");
    scanf("%d", &pilihan);
    
    switch(pilihan){
        case 1:
            printf("Masukkan panjang sisi kubus: ");
            scanf("%f", &sisi);
            volume_kubus = sisi * sisi * sisi;
            printf("Volume kubus adalah: %.2f\n", volume_kubus);
            break;
        case 2:
            printf("Masukkan panjang jari-jari lingkaran: ");
            scanf("%f", &jari_jari);
            luas_lingkaran = PI * jari_jari * jari_jari;
            printf("Luas lingkaran adalah: %.2f\n", luas_lingkaran);
            break;
        case 3:
            printf("Masukkan panjang jari-jari lingkaran: ");
            scanf("%f", &jari_jari);
            printf("Masukkan tinggi silinder: ");
            scanf("%f", &tinggi);
            volume_silinder = PI * jari_jari * jari_jari * tinggi;
            printf("Volume silinder adalah: %.2f\n", volume_silinder);
            break;
        default:
            printf("Pilihan tidak valid! Silakan pilih 1, 2 atau 3.\n");
    }
    
    return 0;
}