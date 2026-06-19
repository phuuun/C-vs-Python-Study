#include <stdio.h>

int main(){
	
	int N;
	float total = 0;
	
	printf("Masukkan N : ");
	scanf("%d", &N);
	int data[N];
	
	printf("Masukkan data : ");
	for (int i = 0; i < N; i++){

		scanf("%d", &data[i]);
		total += data[i];
	}
	
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (data[j] > data[j + 1]) {
				int temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
	

	printf("Data terurut : ");
	for (int i = 0; i < N; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
	
	int min = data[0];
	int max = data[N - 1];
	float rata_rata = total / N;
	
	printf("Min: %d | Max: %d | Rata-rata: %.2f\n", min, max, rata_rata);
	
	return 0;
}
