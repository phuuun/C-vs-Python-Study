#include <stdio.h>
int main() {
    double c;
    printf("Masukkan suhu (Celsius) : "); scanf("%lf", &c);
    printf("Suhu Fahrenheit : %.2f\n", c * 9.0 / 5.0 + 32);
}
