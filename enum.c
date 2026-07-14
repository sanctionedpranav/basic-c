#include <stdio.h>

enum Day
{
    SUNDAY = 4,
    MONDAY = 2,
    TUESDAY = 6,
    WEDNESDAY = 0,
    THURSDAY = 1,
    FRIDAY = 3,
    SATURDAY = 7,
};

int main()
{
    enum Day today;

    today = WEDNESDAY;

    printf("Value of Today: %d\n", today);
}