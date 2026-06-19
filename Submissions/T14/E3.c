#include <stdio.h>

int main()
{
    int nomor;
    printf("Masukkan nomor antrian: ");
    scanf("%d", &nomor);
    
    if (nomor % 2 != 0){
        printf("Nomor %d adalah GANJIL Loket A\n", nomor);
    } else {
        printf("Nomor %d adalah GENAP Loket B\n", nomor);
    }
    return 0;
}