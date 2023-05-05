#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32], i = 0;

    if (n < 0) {
        printf("-");
        n = -n;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int n;

    printf("Введи число ");
    scanf("%d", &n);

    printf("Двоичный код ");
    decimalToBinary(n);

    return 0;
}