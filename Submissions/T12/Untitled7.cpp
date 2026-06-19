#include <stdio.h>

int main(){
	
	int n;
	printf("Masukkan N : ");
	scanf("%d", &n);
	int total = 0;
	int number[n];
	printf("Masukkan data : ");
	for(int i = 0;i < n;i++){
		scanf("%d", &number[i]);
		total += number[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j++){
			if(number[i] > number[j]){
				int temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}
	}
	float average = total / float(n);
	printf("Data Terurut : ");
	for(int i = 0;i < n;i++){
		printf("%d ", number[i]);
	}
	
	printf("\nMin: %d | Max: %d | Rata-rata:  %.2f", number[0], number[n-1], average);
	
	return 0;
}
