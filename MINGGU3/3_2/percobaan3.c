// Buat program untuk mengkonversikan nilai angka ke nilai huruf.
// Petunjuk : nilai_angka<=40 = E
// 40<nilai_angka<=55 = D
// 55<nilai_angka<=60 = C
// 60<nilai_angka<=80 = B
// 80<nilai_angka<=100 = A

// Input : nilai_angka = 62
// Output : Nilai huruf adalah B


#include <stdio.h>
int main(){
    int bil;

    printf("nilai angka = ");
    scanf("%d", &bil );

    if(bil <= 40){
        printf("Nilai huruf adalah E");     
    }else if(bil <= 55){
        printf("Nilai huruf adalah D");
    }else if(bil <= 60){
        printf("Nilai huruf adalah C");
    }else if(bil <= 80){
        printf("Nilai huruf adalah B");
    }else if(bil <= 100){
        printf("Nilai huruf adalah A");
    }
}