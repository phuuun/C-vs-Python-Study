#include <stdio.h>

int main() {
    int N, M;

    printf("Baris & Kolom : ");
    scanf("%d %d", &N, &M);

    int matriks[N][M];

    for (int i = 0; i < N; i++) {
        printf("Baris %d : ", i + 1);
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    printf("\n");

    printf("Matriks (%dx%d) :\n", N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }

    
    printf("Transpose (%dx%d) :\n", M, N);
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
