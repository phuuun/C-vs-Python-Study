#include <stdio.h>

int main(){
	int suhu;
	printf("Masukkan suhu (dalam satuan Celsius) : ");
	scanf("%d", &suhu);
	
	float farenheit = (suhu * 1.8) + 32;
	printf("Suhu Fahrenheit : %.2f\n", farenheit);
	
	
	return 0;
}
