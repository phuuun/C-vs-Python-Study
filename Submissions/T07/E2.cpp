#include <stdio.h>

int main() {
    float celcius;
    printf("Masukkan suhu (Celcius): ");
    scanf("%f", &celcius);

    printf("Suhu Fahrenheit: %.2f", (celcius * float(9.0/5.0)) + 32);
}