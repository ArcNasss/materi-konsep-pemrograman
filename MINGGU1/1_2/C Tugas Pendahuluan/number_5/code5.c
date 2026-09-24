#include <stdio.h>

int main()
{
    float x, y;

    printf("Masukkan angka x yang ingin dikalikan dengan 50 : ");
    scanf("%f", &x);

    y = 50 * x;

    printf("Hasil dari x dikali dengan 50 : %f\n", y);

    return 0;
}