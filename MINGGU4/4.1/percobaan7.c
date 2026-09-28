// 7. Gunakan loop for untuk membuat program sebagai berikut:
// input : n
// output : 1*2*3*4*5*... *n (faktorial)

#include <stdio.h>

int main() {
    int n, bilangan;
    long long faktorial = 1;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (bilangan = 1; bilangan <= n; bilangan++) {
        printf("%d", bilangan);
        faktorial *= bilangan;
        if (bilangan < n) {
            printf(" * ");
        }
    }

    printf(" = %lld\n", faktorial);

    return 0;
}
