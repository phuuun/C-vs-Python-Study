#include <stdio.h>

int main(){
    int firstNum;
    int secondNum;
    int thirdNum;

    printf("Masukkan angka pertama: ");
    scanf("%d", &firstNum);

    printf("Masukkan angka kedua: ");
    scanf("%d", &secondNum);

    printf("Masukkan angka ketiga: ");
    scanf("%d", &thirdNum);

    int totalHarga = firstNum + secondNum + thirdNum;
    printf("Total Harga: %d", totalHarga);
}