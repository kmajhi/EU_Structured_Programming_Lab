#include <stdio.h>

int main() {
    int days, years, months, weeks, remaining_days;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    months = days % 365 / 30;
    weeks = days % 365/7;
    remaining_days = days%365%30/7;

    printf("%d days is equal to %d years, %d Months, %d weeks, and %d days.\n", days, years, months, weeks, remaining_days);

    return 0;
}
