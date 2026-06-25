#include <stdio.h>

int main(){
	
	int nomor;
	
	printf("Masukkan nomor antrian : ");
	scanf("%d", &nomor);
	
	if(nomor % 2 == 0){
		printf("Nomor %d adalah : GENAP -> Loket B", nomor);
	}else{
		printf("Nomor %d adalah : GANJIL-> Loket A", nomor);
	}
	
	return 0;
}
