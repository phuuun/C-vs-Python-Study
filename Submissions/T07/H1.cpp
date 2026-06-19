#include <stdio.h>

int main() {
    int n;

    printf("Masukkan N: ");
    scanf("%d", &n);

    int data[n];

    printf("Masukkan data: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }


    int min = data[0];
    int max = data[n - 1];

    float total = 0;

    for(int i = 0; i < n; i++) {
        total += data[i];
    }

    float rata = total / n;

    printf("\nData terurut : ");
    for(int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    printf("\nMin : %d", min);
    printf("\nMax : %d", max);
    printf("\nRata-rata : %.2f\n", rata);

    return 0;
}