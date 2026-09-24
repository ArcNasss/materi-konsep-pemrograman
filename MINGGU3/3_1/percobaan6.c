#include <stdio.h>

int main (){
    int bilangan;
    printf("Masukkan sembarang bilangan:");
    scanf("%d", &bilangan);

    if(bilangan > 100){
        printf("%d lebih besar dari range 1 - 100 ", bilangan);
    } else {
         printf("%d ada dalam range 1 - 100 ", bilangan);
         
    }
}