#include <stdio.h>

int main() {
    int antrian;

    printf("Masukkan nomor antrian: ");
    scanf("%d", &antrian);

    if(antrian % 2 == 0) {
        printf("Nomor %d adalah : GENAP -> Loket B", antrian);
    } else {
        printf("Nomor %d adalah : GANJIL -> Loket A", antrian);
    }
    
    return 0;
}