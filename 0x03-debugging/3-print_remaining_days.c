#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int is_leap_year = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

    if (month < 1 || month > 12 || day < 1 || day > 31)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (is_leap_year && month > 2)
    {
        day++;
    }

    int day_of_year;
    switch (month)
    {
        case 1:
            day_of_year = day;
            break;
        case 2:
            day_of_year = 31 + day;
            break;
        case 3:
            day_of_year = 59 + day + is_leap_year;
            break;
        case 4:
            day_of_year = 90 + day + is_leap_year;
            break;
        case 5:
            day_of_year = 120 + day + is_leap_year;
            break;
        case 6:
            day_of_year = 151 + day + is_leap_year;
            break;
        case 7:
            day_of_year = 181 + day + is_leap_year;
            break;
        case 8:
            day_of_year = 212 + day + is_leap_year;
            break;
        case 9:
            day_of_year = 243 + day + is_leap_year;
            break;
        case 10:
            day_of_year = 273 + day + is_leap_year;
            break;
        case 11:
            day_of_year = 304 + day + is_leap_year;
            break;
        case 12:
            day_of_year = 334 + day + is_leap_year;
            break;
        default:
            break;
    }

    int remaining_days = is_leap_year ? 366 - day_of_year : 365 - day_of_year;
    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", remaining_days);
}

