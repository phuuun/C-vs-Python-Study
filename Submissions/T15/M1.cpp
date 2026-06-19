#include <stdio.h>

int main() {
    int nilai[5];
    int total = 0;
    float rata;
    char grade;

    printf("Masukkan 5 nilai : ");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &nilai[i]);
        total += nilai[i];
    }

    rata = total / 5.0;

    if(rata >= 80)
        grade = 'A';
    else if(rata >= 70)
        grade = 'B';
    else if(rata >= 60)
        grade = 'C';
    else if(rata >= 50)
        grade = 'D';
    else
        grade = 'E';

    printf("Rata-rata : %.2f\n", rata);
    printf("Grade : %c\n", grade);

    return 0;
}
