/*
Years divisible by 4 are leap years,
but years divisible by 100 are not leap years,
but years divisible by 400 are leap years.
Tested years are in range 1600 ≤ year ≤ 4000.
*/
#include <stdio.h>
#include <stdbool.h>

// bool IsLeapYear(int year) {
//     bool is_divisible_by_four(int year) {
//         if(year % 4 == 0) return true;
//         else return false;
//     }

//     bool is_divisible_by_onehundred(int year) {
//         if(year % 100 == 0) return true;
//         else return false;
//     }

//     bool is_dividsible_by_fourhundred(int year) {
//         if(year % 400 == 0) return true;
//         else return false;
//     }

//     printf("It is %s that %d is divisible by 4.\n", is_divisible_by_four(year) ? "true" : "false", year);
//     printf("It is %s that %d is divisible by 100.\n", is_divisible_by_onehundred(year) ? "true" : "false", year);
//     printf("It is %s that %d is divisible by 400.\n", is_dividsible_by_fourhundred(year) ? "true" : "false", year);
//     if (is_divisible_by_four(year) && !is_divisible_by_onehundred(year) || is_dividsible_by_fourhundred(year)) { printf("%d is a leap year!\n\n", year); }
//     else { printf("%d is not a leap year\n\n"); }

//     if (is_divisible_by_four(year) && !is_divisible_by_onehundred(year) || is_dividsible_by_fourhundred(year)) { return true; }
//     else { return false; }
// }

bool IsLeapYear(int year) {
    bool is_divisible_by_four = year % 4;

    bool is_divisible_by_onehundred = year % 100;

    bool is_dividsible_by_fourhundred = year % 400;

    printf("%d + %d = 1 | %d = 1\n", !is_divisible_by_four, !is_divisible_by_onehundred, !is_dividsible_by_fourhundred);
    if (!is_divisible_by_four && is_divisible_by_onehundred || !is_dividsible_by_fourhundred) { printf("%d is a leap year!\n\n", year); }
    else { printf("%d is not a leap year!\n\n", year); }

    if (!is_divisible_by_four && is_divisible_by_onehundred || !is_dividsible_by_fourhundred) { return true; }
    else { return false; }
}


void main() {
    printf("2020\t");
    IsLeapYear(2020);
 
    printf("2020\t");
    IsLeapYear(2000);

    printf("2015\t");
    IsLeapYear(2015);

    printf("2100\t");
    IsLeapYear(2100);
}
