// 4. Gunakan loop for dengan kenaikan varibel negatif untuk menampilkan seluruh karaker
// dari Z sampai dengan A dalam baris-baris yang terpisah.

#include <stdio.h>

int main() {
    char karakter;

    for (karakter = 'Z'; karakter >= 'A'; karakter--) {
        printf("%c\n", karakter);
    }

    return 0;
}
