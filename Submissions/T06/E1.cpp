#include <stdio.h>

int main(){
	
	int angka;
	int total = 0;
	
	for(int i = 0; i < 3; i++){
		printf("Masukkan angka %d: ", i+1);
		scanf("%d", &angka);
		total += angka;
	}
	
	printf("Total Harga: %d\n", total);
	return 0;
}
