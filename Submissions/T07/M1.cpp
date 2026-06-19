#include <stdio.h>

int main() {
    int nilai[5];

    printf("Masukkan 5 nilai:\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &nilai[i]);
    }

    float avg = 0;

    for(int i = 0; i < 5; i++) {
        avg += nilai[i];
    }

    avg /= 5;

    if(avg >= 80) printf("Rata-rata: %.2f\nGrade: A", avg);
    else if(avg >= 70) printf("Rata-rata: %.2f\nGrade: B", avg);
    else if(avg >= 60) printf("Rata-rata: %.2f\nGrade: C", avg);
    else if(avg >= 50) printf("Rata-rata: %.2f\nGrade: D", avg);
    else printf("Rata-rata: %.2f\nGrade: E", avg);

    return 0;
}