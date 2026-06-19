#include <stdio.h>

int main()
{
    int n;
    printf("Masukkan N: ");
    scanf("%d", &n);
    
    int a = 0, b = 1, current = 0;
    for (int i = 1; i <= n; i++){
        printf("%d ", a);
        current = a;
        int next = a + b;
        a = b;
        b = next;
    }
    
    printf("Fibonnacci ke-%d %d\n", n, current);
    return 0;
}