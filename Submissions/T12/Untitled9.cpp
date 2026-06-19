#include <stdio.h>

int main(){
	int n, a, b;
	int fakto = 1;
	int power = 1;
	
	printf("Masukkan n (faktorial) : ");
	scanf("%d", &n);
	
	printf("Masukkan a dan b(a pamgkat b) : ");
	scanf("%d %d", &a, &b);
	
	for(int i = 1;i<=n;i++){
		fakto *= i;
	}
	
	for(int i = 1;i <= b;i++){
		power *= a;
	}
	printf("%d! = %d\n", n, fakto);
	printf("%d^%d = %d\n", a, b, power);
	return 0;
}
