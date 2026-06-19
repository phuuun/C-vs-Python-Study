#include <stdio.h>
int main(){
	int baris, kolom;
	printf("Baris & Kolom : ");
	scanf("%d %d", &baris, &kolom);
	
	int matrix[baris][kolom];
	
	for(int i = 0;i < baris;i++){
		printf("\nBaris %d : ", i+1);
		for(int j = 0;j < kolom;j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("Matriks (%dx%d) :\n", baris, kolom);
	for(int i = 0;i < baris; i++){
		for(int j = 0;j < kolom;j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTranspose (%dx%d) :\n", kolom, baris);
	for(int i = 0;i < kolom;i++){
		for(int j = 0;j < baris; j++){
			printf("%d ", matrix[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
