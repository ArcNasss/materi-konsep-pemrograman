#include <stdio.h>

int main (){
    int totalBelanja, totalDiskon, totalBayar;
    printf("Masukkan total belanja:");
    scanf("%d", &totalBelanja);

    if(totalBelanja >= 100000){
        totalDiskon = totalBelanja * 0.05;
        totalBayar = totalBelanja - totalDiskon;
        printf("Total pembelian anda adalah: %d \n", totalBayar);
    } else {
        printf("anda tidak mendapaat diskon");
    }
}