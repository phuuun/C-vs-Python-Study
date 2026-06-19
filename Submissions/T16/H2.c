#include <stdio.h>

int main() {
    int n, m;
    printf("Baris & Kolom: ");
    scanf("%d %d", &n, &m);
    
    int matriks[n][m];
    
    for (int i = 0; i < n; i++) {
        printf("Baris %d: ", i + 1);
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }
    
    printf("Matriks (%dx%d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    
    printf("Transpose (%dx%d):\n", m, n);
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}