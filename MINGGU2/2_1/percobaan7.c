#include <stdio.h>

int main(){
    const float pi = 3.14f;
    float jariJari, luas;
    printf("masukkan nilai jari-jari:\n");
    
    scanf("%f" , &jariJari);
    luas = pi * jariJari * jariJari;


    printf("luas lingkaran = %.2f\n", luas);
    
    return 0;

}