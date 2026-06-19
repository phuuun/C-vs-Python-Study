#include <stdio.h>
int main(){
	int angka1;
	int angka2;
	int angka3;
	int total;
	
	printf("Masukkan Angka Pertama: ");
	scanf("%d", &angka1);
	
	printf("Masukkan Angka Kedua: ");
	scanf("%d", &angka2);
	
	printf("Masukkan Angka Ketiga: ");
	scanf("%d", &angka3);
	
	total = angka1+angka2+angka3;
	
	printf("Total Harga: %d\n", total);
	
	
	return 0;
}
