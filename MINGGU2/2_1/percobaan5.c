#include <stdio.h>

int main(){
    float a,b,c,D;

    printf ("masukkan nilaai a: ");
    if(scanf("%f", &a) != 1){
        printf("Input tidak valid. Harap masukkan angka.\n");
        return 1; 
    }

    printf ("masukkan nilaai b: ");
    if(scanf("%f", &b) != 1){
        printf("Input tidak valid. Harap masukkan angka.\n");
        return 1; 
    }

    printf ("masukkan nilaai c: ");
    if(scanf("%f", &c) != 1){
        printf("Input tidak valid. Harap masukkan angka.\n");
        return 1; 
    }

    if(a  == 0){
        printf("a tidak boleh 0\n");
        return 1;
    }

    D =  (b*b) - (4*a*c);
    
    printf("D = %.2f\n", D);

    if(D > 0){
        printf("Persamaan memiliki dua akar real\n");
    } else if(D == 0){
        printf("Persamaan memiliki satu akar real\n");
    } else {
        printf("Persamaan tidak memiliki akar real\n");
    }

    return 0;
}