#include <stdio.h>

int main() {
    char letter;
    int sum = 0;
    int valid_flag = 0;

    printf("Masukkan sebuah huruf: ");
    letter = getchar();
    
    switch (letter) {
        case 'X':
            sum = 0;
            printf("Letter 'X' terdeteksi. Nilai sum = %d\n", sum);
            break;

        case 'Z':
            valid_flag = 1;
            printf("Letter 'Z' terdeteksi. Nilai valid_flag = %d\n", valid_flag);
            break;

        case 'A':
            sum = 1;
            printf("Letter 'A' terdeteksi. Nilai sum = %d\n", sum);
            break;

        default:
            printf("Unknown letter -->%c\n", letter);
            break;
    }

    return 0;
}