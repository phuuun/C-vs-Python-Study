#include <stdio.h>

int main(){
	int a;
	
	printf("Masukkan nomor antrian: ");
	scanf("%d", &a);
	int b = a % 2;
	if(b == 0){
		printf("Nomor %d adalah : Genap -> Loket B", a);
	} else {
		printf("Nomor %d adalah : Ganjil -> Loket A", a);
	}
	
	
	
	return 0;
}
