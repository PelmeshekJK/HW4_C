#include <stdio.h>

int main() {
    int n, num, zeros_count = 0, positive_count = 0, negative_count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num == 0) {
            zeros_count++;
        } else if (num > 0) {
            positive_count++;
        } else {
            negative_count++;
        }
    }
    printf("%d %d %d", zeros_count, positive_count, negative_count);
    return 0;
}
