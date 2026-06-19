#include <stdio.h>

long long faktorial(int n){
    if(n == 0 || n == 1)
        return 1;

    return n * faktorial(n - 1);
}

long long pangkat(int a, int b){
    if(b == 0)
        return 1;

    return a * pangkat(a, b - 1);
}

int main() {

    int n, a, b;

    printf("Masukkan n (faktorial) : ");
    scanf("%d", &n);

    printf("Masukkan a dan b : ");
    scanf("%d %d", &a, &b);

    printf("%d! = %lld\n", n, faktorial(n));
    printf("%d^%d = %lld\n", a, b, pangkat(a, b));

    return 0;
}
