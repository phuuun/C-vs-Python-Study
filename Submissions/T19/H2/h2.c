#include <stdio.h>
int main() {
    int r, c;
    printf("Baris & Kolom : "); scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++) {
        printf("Baris %d : ", i + 1);
        for (int j = 0; j < c; j++) scanf("%d", &m[i][j]);
    }
    printf("Matriks (%dx%d) :\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%d%s", m[i][j], j < c-1 ? " " : "\n");
    }
    printf("Transpose (%dx%d) :\n", c, r);
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) printf("%d%s", m[i][j], i < r-1 ? " " : "\n");
    }
}
