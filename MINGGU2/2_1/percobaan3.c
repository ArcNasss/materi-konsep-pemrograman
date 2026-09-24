#include <stdio.h>

int main(){
    int seratus_ribu = 100000;
    int lima_puluh_ribu = 50000;
    int dua_puluh_ribu = 20000;
    int sepuluh_ribu = 10000;
    int lima_ribu = 5000;
    int dua_ribu = 2000;
    int se_ribu = 1000;
    int sisa, jumlah_uang;

    printf("Masukkan jumlah uang: ");
    scanf("%d", &jumlah_uang);

    int seratus = jumlah_uang / seratus_ribu;
    sisa = jumlah_uang % seratus_ribu;
    int lima_puluh = sisa / lima_puluh_ribu;
    sisa = sisa % lima_puluh_ribu;
    int dua_puluh = sisa / dua_puluh_ribu;
    sisa = sisa % dua_puluh_ribu;
    int sepuluh = sisa / sepuluh_ribu;
    sisa = sisa % sepuluh_ribu;
    int lima = sisa / lima_ribu;
    sisa = sisa % lima_ribu;
    int dua = sisa / dua_ribu;
    sisa = sisa % dua_ribu;
    int seribu = sisa / se_ribu;
    sisa = sisa % se_ribu;

    if(seratus>0){
        printf("%d Lembar %d\n", seratus, seratus_ribu);
    }
    if(lima_puluh>0){
        printf("%d Lembar %d\n", lima_puluh, lima_puluh_ribu);
    }
    if(dua_puluh>0){
        printf("%d Lembar %d\n", dua_puluh, dua_puluh_ribu);
    }
    if(sepuluh>0){
        printf("%d Lembar %d\n", sepuluh, sepuluh_ribu);
    }
    if(lima>0){
        printf("%d Lembar %d\n", lima, lima_ribu);
    }
    if(dua>0){
        printf("%d Lembar %d\n", dua, dua_ribu);
    }
    if(seribu>0){
        printf("%d Lembar %d\n", seribu, se_ribu);
    }

}