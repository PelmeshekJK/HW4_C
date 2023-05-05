#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[15];
    int length, upper = 0, lower = 0, digit = 0, other = 0;

    printf("Введи пароль ");
    scanf("%s", password);

    length = strlen(password);

    if (length < 8 || length > 14) {
        printf("NO");
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (password[i] < 33 || password[i] > 126) {
            printf("NO");
            return 0;
        }

        if (isupper(password[i])) {
            upper = 1;
        } else if (islower(password[i])) {
            lower = 1;
        } else if (isdigit(password[i])) {
            digit = 1;
        } else {
            other = 1;
        }
    }

    if (upper + lower + digit + other < 3) {
        printf("NO");
        return 0;
    }

    printf("YES");

    return 0;
}