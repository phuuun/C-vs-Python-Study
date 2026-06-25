#include <stdio.h>
int main() {
    int n;
    printf("Masukkan N : "); scanf("%d", &n);
    int data[n];
    printf("Masukkan data : ");
    for (int i = 0; i < n; i++) scanf("%d", &data[i]);
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (data[j] > data[j+1]) { int tmp = data[j]; data[j] = data[j+1]; data[j+1] = tmp; }
    double sum = 0;
    printf("Data terurut :");
    for (int i = 0; i < n; i++) { printf(" %d", data[i]); sum += data[i]; }
    printf("\nMin: %d | Max: %d | Rata-rata: %.2f\n", data[0], data[n-1], sum / n);
}
