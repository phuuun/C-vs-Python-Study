#include <stdio.h>

int main()
{
    int angka1, angka2, angka3;
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);
    printf("Masukkan angka ketiga: ");
    scanf("%d", &angka3);
    
    int total = angka1 + angka2 + angka3;
    printf("Total Harga: %d\n", total);
    
    return 0;
}