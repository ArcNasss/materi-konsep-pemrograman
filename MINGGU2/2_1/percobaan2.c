#include <stdio.h>

int main(){
    int dollar;
    float  rupiah;

    printf("Masukkan jumlah uang dalam dollar: ");
    scanf("%d", &dollar);

    rupiah =  dollar * 11090;
    printf("Jumlah uang dalam rupiah = %.3f\n", rupiah);
}