// 3. Gunakan loop for untuk menampilkan seluruh karaker dari A sampai dengan Z dalam
// baris-baris yang terpisah.

#include <stdio.h>

int main() {
    char karakter;

    for (karakter = 'A'; karakter <= 'Z'; karakter++) {
        printf("%c\n", karakter);
    }

    return 0;
}
