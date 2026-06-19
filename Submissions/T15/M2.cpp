#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, temp, hasil;

    printf("Masukkan N : ");
    scanf("%d", &n);

    printf("Deret : ");

    for(int i = 1; i <= n; i++) {
        printf("%d ", a);

        if(i == n)
            hasil = a;

        temp = a + b;
        a = b;
        b = temp;
    }

    printf("\nFibonacci ke-%d : %d\n", n, hasil);

    return 0;
}
