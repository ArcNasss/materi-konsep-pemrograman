#include <stdio.h>

int main(){
    const float f = 1.8, tambah = 32;
    float convert;
    int suhu;
    
    printf("masukkan suhu dalam format Celcius:\n");
    scanf("%d", &suhu);

    convert = suhu * f + tambah;
    printf("Suhu dalam Fahrenheit: %.2f\n", convert);
    return 0;
}