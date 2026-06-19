#include <stdio.h>

int main()
{
    float celcius, fahrenheit;
    printf("Masukkan suhu (Celcius): ");
    scanf("%f", &celcius);
    
    fahrenheit = (celcius * 9.0 / 5.0) + 32.0;
    printf("Suhu Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}