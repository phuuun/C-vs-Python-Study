#include <stdio.h>

int main(){
	int nomor;
	
	printf("Masukkan nomor antrian : ");
	scanf("%d", &nomor);
	print("\n")
	
	if(nomor % 2 == 0){
		printf("Nomor %d adalah : GENAP silakan ke Loket B", nomor);
	}else{
		printf("Nomor %d adalah : GANJIL silakan ke Loket A", nomor);
	}
	
	return 0;
}
