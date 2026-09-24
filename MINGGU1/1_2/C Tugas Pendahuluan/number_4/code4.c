#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Masukkan angka pertama : ");
    scanf("%d", &x);

    printf("Masukkan angka kedua : ");
    scanf("%d", &y);

    z = x + y;

    printf("Hasil dari %d ditambah %d adalah %d\n", x, y, z);

    return 0;
}