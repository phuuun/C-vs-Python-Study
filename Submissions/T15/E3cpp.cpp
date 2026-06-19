#include <stdio.h>
int main(){
	int nomor;
	
	printf("Masukkan Nomor Antrian: ");
	scanf("%d", &nomor);
	
	if (nomor % 2 == 0){
		printf("Nomor %d adalah GENAP -> Loket B\n", nomor);
	} else {
		printf("Nomor %d adalah GANJIL -> Loket A\n", nomor);
	}
	return 0;
}
