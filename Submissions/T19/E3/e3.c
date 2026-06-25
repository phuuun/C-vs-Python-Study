#include <stdio.h>
int main() {
    int n;
    printf("Masukkan nomor antrian : "); scanf("%d", &n);
    if (n % 2 != 0)
        printf("Nomor %d adalah : GANJIL -> Loket A\n", n);
    else
        printf("Nomor %d adalah : GENAP -> Loket B\n", n);
}
