#include <stdio.h>

int main (){
    int bilangan;
    printf("Masukkan bilangan:");
    scanf("%d", &bilangan);

    if(bilangan % 2 == 0){
        printf("Bilangan yang diinputkan adalah: %d \n %d adalah bilangan genap", bilangan, bilangan);
    } else {
        printf("Bilangan yang diinputkan adalah: %d \n %d adalah bilangan ganjil", bilangan, bilangan);
    }
}