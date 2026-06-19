#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Masukkan angka pertama: ");
    scanf("%d", &a);
    printf("Masukkan angka kedua: ");
    scanf("%d", &b);
    printf("Masukkan angka ketiga: ");
    scanf("%d", &c);
    
    int total = a + b + c;
    printf("Total Harga: %d\n", total);
    
    return 0;
}