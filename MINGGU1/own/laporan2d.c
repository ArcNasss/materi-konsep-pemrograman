#include <stdio.h>

int main(void) {
    int bil1, bil2;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bil1);
    getchar();

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bil2);
    getchar();

    int jumlah = bil1 + bil2;
    float rataRata = (float)(bil1 + bil2) / 2;
    int kuadratBil1 = bil1 * bil1;
    int kuadratBil2 = bil2 * bil2;

    printf("Jumlah dari %d + %d adalah: %d\n", bil1, bil2, jumlah);
    printf("Rata-rata dari %d dan %d adalah: %.1f\n", bil1, bil2, rataRata);
    printf("Kuadrat dari bilangan pertama %d: %d\n", bil1, kuadratBil1);
    printf("Kuadrat dari bilangan kedua %d: %d\n", bil2, kuadratBil2);



    return 0;
}
