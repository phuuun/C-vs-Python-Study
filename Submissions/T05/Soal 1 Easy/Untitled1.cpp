#include <stdio.h>

int main(){
	
	int a, b, c;
	printf("Masukkan Angka Pertama : ");
	scanf("%d", &a);
	printf("Masukkan Angka Kedua : ");
	scanf("%d", &b);
	printf("Masukkan Angka Ketiga : ");
	scanf("%d", &c);
	
	int total = a + b + c;
	printf("Total Harga : %d", total);
	
	return 0;
	
}
