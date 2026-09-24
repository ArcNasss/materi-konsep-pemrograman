#include <stdio.h>

int main() {
    char karakter;

    printf("Masukkan sebuah karakter: ");
    scanf("%c", &karakter);
    getchar();

    printf("Karakter yang dimasukkan   : %c\n", karakter);

    return 0;
}
