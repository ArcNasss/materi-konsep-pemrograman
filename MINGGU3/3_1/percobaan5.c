#include <stdio.h>

int main (){
    int bil1,bil2;
    float hasilBagi;

    printf("Masukkan bilangan pertama:");
    scanf("%d", &bil1);
    printf("Masukkan bilangan kedua:");
    scanf("%d", &bil2);
    if(bil2 == 0){
        printf("Bilangan kedua tidak boleh nol");
        return 0;
    }

    hasilBagi = (float)bil1 / bil2;
    printf("Hasil pembagian dari %d dan %d adalah: %.3f", bil1, bil2, hasilBagi);
    return 0;
}