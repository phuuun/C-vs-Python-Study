#include <stdio.h>
int main(){
	int n, a = 0, b = 1, c, fib;
	
	printf("Masukkan ke N untuk Fibonacci : ");
	scanf("%d", & n);
	
	printf("Deret : ");
	for(int i = 1;i <= n;i++){
		printf("%d ", a);
		fib = a;
		c = a + b;
		a = b;
		b = c;
		
	}
	
	printf("\nFibonacci ke-%d: %d", n, fib);
	return 0;
}
