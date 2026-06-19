#include <stdio.h>

int main()
{
    float celcius, farenheit;
    printf("Masukkan suhu (Celcius): ");
    scanf("%f", &celcius);
    
    farenheit = (celcius * 9.0 / 5.0) + 32.0;
    printf("Suhu Fahrenheit: %.2f\n", farenheit);
    return 0;
}