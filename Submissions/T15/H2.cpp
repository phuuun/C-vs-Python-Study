#include <stdio.h>

int main() {
    int baris, kolom;

    printf("Baris & Kolom : ");
    scanf("%d %d", &baris, &kolom);

    int m[baris][kolom];

    for(int i=0;i<baris;i++){
        printf("Baris %d : ", i+1);

        for(int j=0;j<kolom;j++){
            scanf("%d",&m[i][j]);
        }
    }

    printf("\nMatriks (%dx%d) :\n", baris, kolom);

    for(int i=0;i<baris;i++){
        for(int j=0;j<kolom;j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Transpose (%dx%d) :\n", kolom, baris);

    for(int j=0;j<kolom;j++){
        for(int i=0;i<baris;i++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
