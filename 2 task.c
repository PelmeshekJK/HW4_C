#include <stdio.h>

int main() {
    int n, k;
    printf("Введи номер первого дня твоего месяца от 1 до 7: ");
    scanf("%d", &n);
    printf("Введи сколько дней в твоем месяце будет от 1 до 99: ");
    scanf("%d", &k);

    int i, j;
    for(i = 1; i < n; i++) {
        printf("   ");
    }
    for(j = 1; j <= k; j++) {
        printf("%2d ", j);
        if((j + n - 1) % 7 == 0 || j == k) {
            printf("\n");
        }
    }

    return 0;
}

