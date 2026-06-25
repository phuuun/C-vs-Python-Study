#include <stdio.h>
int main() {
    int n;
    printf("Masukkan N : "); scanf("%d", &n);
    int a = 0, b = 1, tmp, last = 0;
    printf("Deret :");
    for (int i = 0; i < n; i++) {
        printf(" %d", a);
        last = a;
        tmp = a + b; a = b; b = tmp;
    }
    printf("\nFibonacci ke-%d : %d\n", n, last);
}
