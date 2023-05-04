#include <stdio.h>

int main() {
    int month, year, days;

    printf("Введи номер месяца: ");
    scanf("%d", &month);

    printf("Введи номер года: ");
    scanf("%d", &year);

    switch(month) {
        case 1:
            days = 31;
            break;
        case 2:
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                days = 29;
            else
                days = 28;
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days = 31;
            break;
        case 6:
            days = 30;
            break;
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12:
            days = 31;
            break;
        default:
            printf("Нет такого месяца\n");
            return -1;
    }

    printf("Количество дней в %d месяце %d года: %d\n", month, year, days);

    return 0;
}