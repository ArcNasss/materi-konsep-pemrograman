// 6. Gunakan loop for untuk membuat program sebagai berikut:
// input : n
// output : 1 -2 3 -4 5 -6 7 -8 ... n

#include <stdio.h>

int main() {
    int n, bilangan;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (bilangan = 1; bilangan <= n; bilangan++) {
        if (bilangan % 2 == 0) {
            printf("-%d", bilangan);
        } else {
            printf("%d", bilangan);
        }

        if (bilangan < n) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
