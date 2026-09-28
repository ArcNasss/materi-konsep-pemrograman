// 5. Gunakan loop for untuk membuat program sebagai berikut:
// input : n
// output : 1 3 5 7 ... m ( m = bilangan ganjil ke n)

#include <stdio.h>

int main() {
    int n, bilangan, urutan;

    printf("Masukkan banyak bilangan ganjil: ");
    scanf("%d", &n);

    for (urutan = 1, bilangan = 1; urutan <= n; urutan++, bilangan += 2) {
        printf("%d", bilangan);
        if (urutan < n) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
