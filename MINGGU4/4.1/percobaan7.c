// 7. Gunakan loop for untuk membuat program sebagai berikut:
// input : n
// output : 1*2*3*4*5*... *n (faktorial)

//#include <stdio.h>

// int main() {
//     int n, bilangan;

//     printf("Masukkan nilai n: ");
//     scanf("%d", &n);

//     for (bilangan = 1; bilangan <= n; bilangan++) {
//         printf("%d", bilangan);
//         if (bilangan < n) {
//             printf(" * ");
//         }

//     }

//     printf("\n");

//     return 0;
// }



#include <stdio.h>

int main() {
    int n, bilangan;
    int hasil = 1;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (bilangan = 1; bilangan <= n; bilangan++) {
        printf("%d", bilangan);

        hasil = hasil * bilangan;

        if (bilangan < n) {
            printf(" * ");
        }
    }

    printf(" = %d\n", hasil);

    return 0;
}