#include <stdio.h>

int main(){
    int a = 12;
    int b = 2;
    int c = 3;
    int d = 4;

    printf("hasil dari %d %% %d = %d\n", a, b, a % b);
    printf("hasil dari %d - %d", a,c,a -c);
    printf("hasil dari %d + %d = %d\n", a, b, a + b);
    printf("hasil dari %d / %d = %d\n", a, d, a / d);
    printf("hasil dari %d / %d * %d + %d %% %d = %d\n", a, d, d, a, d, a / d * d + a % d);
    printf("hasil dari %d %% %d / %d * %d - %d = %d\n", a, d, d, a, c, a % d / d * a - c);


    return 0;
}