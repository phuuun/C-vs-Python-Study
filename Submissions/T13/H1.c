#include <stdio.h>

int main()
{
    int n;
    printf("Masukkan N: ");
    scanf("%d", &n);
    
    int data[n];
    int total = 0;
    
    printf("Masukkan Data: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &data[i]);
        total += data[i];
    }
    
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (data[j] > data[j + 1]){
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    int min = data[0];
    int max = data[n - 1];
    float rata_rata = (float)total/n;
    printf("Data terurut: ");
    for (int i = 0; i < n; i++){
        printf("%d ", data[i]);
    }
    printf("\nMin: %d Max: %d | Rata-rata: %.2f\n", min, max, rata_rata);
    return 0;
}