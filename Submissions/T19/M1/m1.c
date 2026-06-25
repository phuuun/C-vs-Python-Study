#include <stdio.h>
int main() {
    int nilai[5];
    printf("Masukkan 5 nilai : ");
    for (int i = 0; i < 5; i++) scanf("%d", &nilai[i]);
    double rata = 0;
    for (int i = 0; i < 5; i++) rata += nilai[i];
    rata /= 5;
    char grade;
    if (rata >= 80) grade = 'A';
    else if (rata >= 70) grade = 'B';
    else if (rata >= 60) grade = 'C';
    else if (rata >= 50) grade = 'D';
    else grade = 'E';
    printf("Rata-rata : %.2f\n", rata);
    printf("Grade : %c\n", grade);
}
