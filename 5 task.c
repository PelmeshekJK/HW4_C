#include <stdio.h>

int main() {
    int n, sum = 0, count = 0;

    printf("Введи последовательность чисел ");

    scanf("%d", &n);

    while (n != 0) {
        sum += n;
        count++;
        scanf("%d", &n);
    }

    if (count == 0) {
        printf("Последовательность пуста\n");
    } else {
        float average = (float) sum / count;
        printf("Среднее арифметическое %.2f\n", average);
    }

    return 0;
}


