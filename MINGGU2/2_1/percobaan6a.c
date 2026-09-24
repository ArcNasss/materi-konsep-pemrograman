#include <stdio.h>

int main(){
    float dollar;
    float  rupiah;

    printf("Masukkan jumlah uang dalam dollar: ");
    scanf("%f", &dollar);

    rupiah =  dollar * 11.090f;
    printf("Jumlah uang dalam rupiah = %.3f\n", rupiah);
}