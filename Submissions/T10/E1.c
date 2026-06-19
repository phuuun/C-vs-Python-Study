#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Masunkkan angka pertama: ");
    scanf("%d", &a);
    printf("Masunkkan angka kedua: ");
    scanf("%d", &b);
    printf("Masunkkan angka ketiga: ");
    scanf("%d", &c);
    
    int total = a + b + c;
    printf("Total Harga: %d\n", total);
    
    return 0;
}