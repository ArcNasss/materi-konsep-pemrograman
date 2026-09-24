#include <stdio.h>

int main(){
    int var_bulat = 32767;
    float var_pecahan1 = 339.2345678f;
    double var_pecahan2 = 3.4567e+40;
    char var_karakter = 'S';

    printf("Nilai variabel var_bulat = %d\n", var_bulat);
    printf("Nilai variabel var_pecahan1 = %.7f\n", var_pecahan1);
    printf("Nilai variabel var_pecahan2 = %le\n", var_pecahan2);
    printf("Nilai variabel var_karakter = %c\n", var_karakter);
}