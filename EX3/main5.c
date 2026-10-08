#include <stdio.h>

int check_leap_year(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int i = 2000; // output "閏年"
    // int i = 1999; // output "不是閏年"
    // int i = 2020; // output "閏年"
    // int i = 1900; // output "不是閏年"
    if (check_leap_year(i)) {
        printf("閏年\n");
    } else {
        printf("不是閏年\n");
    }
    return 0;
}
