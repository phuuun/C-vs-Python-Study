#include <stdio.h>

int main(){
	
	int celsius;
	
	printf("Masukkan suhu (Celsius) : ");
	scanf("%d", &celsius);
	
	float farenheit = (celsius * 1.8) + 32;
	
	printf("Suhu Fahrenheit : %.2f", farenheit);
	
	
	return 0;
}
