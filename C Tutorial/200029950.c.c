#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12)
        return 0;

    int daysInMonth;

    if (month == 2) {
        daysInMonth = isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    return (day >= 1 && day <= daysInMonth);
}

void calculateNextDay(int day, int month, int year) {
    int daysInMonth;

    if (isValidDate(day, month, year)) {
        if (month == 2) {
            daysInMonth = isLeapYear(year) ? 29 : 28;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            daysInMonth = 30;
        } else {
            daysInMonth = 31;
        }

        if (day < daysInMonth) {
            day++;
        } else {
            day = 1;
            if (month < 12) {
                month++;
            } else {
                month = 1;
                year++;
            }
        }

        printf("The next day of %02d.%02d.%04d is %02d.%02d.%04d\n", day - 1, month, year, day, month, year);
    } else {
        printf("This is not a valid date!\n");
    }
}

int main() {
    int day, month, year;

    while (1) {
        printf("Enter a date (0 0 0 to quit): ");
        scanf("%d %d %d", &day, &month, &year);

        if (day == 0 && month == 0 && year == 0) {
            printf("Thanks for using our calendar!\n");
            break;
        }

        calculateNextDay(day, month, year);
    }

    return 0;
}
