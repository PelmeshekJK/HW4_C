#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Введите количество ");
    scanf("%d", &n);

    int arr[n];

    printf("элементы массива ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            count++;
        }
    }

    printf("количество положительных элементов массива %d\n", count);

    return 0;
}


