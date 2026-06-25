#include <stdio.h>
long long faktorial(int n) { return n <= 1 ? 1 : n * faktorial(n - 1); }
long long pangkat(int a, int b) { return b == 0 ? 1 : a * pangkat(a, b - 1); }
int main() {
    int n, a, b;
    printf("Masukkan n (faktorial) : "); scanf("%d", &n);
    printf("Masukkan a dan b : "); scanf("%d %d", &a, &b);
    printf("%d! = %lld\n", n, faktorial(n));
    printf("%d^%d = %lld\n", a, b, pangkat(a, b));
}
