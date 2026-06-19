#include <stdio.h>

int main() {
    int n;
    printf("Masukkan N: ");
    scanf("%d", &n);

    for(int i = 0 ; i < n ; i++) {
        if(i % 3 == 0) printf("Fizz\n");
        else if(i % 5 == 0) printf("Buzz\n");
        else if(i % 3 == 0 && i % 5 == 0) printf("FizzBuzz\n");
        else printf("%d\n", i);
    }
    return 0;
}