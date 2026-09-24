#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c, d, akar_1, akar_2, bagian_real, bagian_imajiner;

    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    printf("Masukkan nilai c: ");
    scanf("%f", &c);

    d = (b * b) - (4 * a * c);
    printf("\nNilai d (D) = %.2f\n", d);

    if (d == 0) {
        printf("Karakteristik: 2 akar real yang kembar\n");
        akar_1 = -b / (2 * a);
        akar_2 = akar_1;
        printf("x1 = %.2f\n", akar_1);
        printf("x2 = %.2f\n", akar_2);
        
    } else if (d > 0) {
        printf("Karakteristik: 2 akar real yang berlainan\n");
        akar_1 = (-b + sqrt(d)) / (2 * a);
        akar_2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %.2f\n", akar_1);
        printf("x2 = %.2f\n", akar_2);
        
    } else { 
        printf("Karakteristik: 2 akar imaginair yang berlainan\n");
        bagian_real = -b / (2 * a);
        bagian_imajiner = sqrt(-d) / (2 * a);
        printf("x1 = %.2f + %.2fi\n", bagian_real, bagian_imajiner);
        printf("x2 = %.2f - %.2fi\n", bagian_real, bagian_imajiner);
    }

    return 0;
}
