#include <stdio.h>

int main()
{
    int angka;
    char huruf;

    printf("Masukkan angka : ");
    scanf("%d", &angka);

    printf("Masukkan huruf : ");
    scanf(" %c", &huruf);

    printf("Angka yang dimasukkan : %d\n", angka);
    printf("Huruf yang dimasukkan : %c\n", huruf);

    return 0;
}