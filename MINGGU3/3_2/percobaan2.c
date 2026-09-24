#include <stdio.h>

int main(){
    int bilanganPertama;
    int bilanganKedua;
    int operasi;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilanganPertama);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bilanganKedua);
    printf("Menu Matematika\n1. Penjumlahan\n2. Pengurangan\n3. Pembagian\n4. Perkalian\n");
    printf("Masukkan pilihan anda: ");
    scanf("%d", &operasi);

    if(operasi == 1){
        int output = bilanganPertama + bilanganKedua;
        printf("Hasil operasi tersebut: %d", output);
    }else if(operasi == 2){
        int output = bilanganPertama - bilanganKedua;
        printf("Hasil operasi terse but: %d", output);
    }else if(operasi == 3){
        float output = (float)bilanganPertama / bilanganKedua;
        printf("Hasil operasi tersebut: %.2f", output);
    }else {
        int output = bilanganPertama * bilanganKedua;
        printf("Hasil operasi tersebut: %d", output);
    }
    
}