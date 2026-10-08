#include <stdio.h>

const double PI = 3.14159265358979;

double get_circumference(int diameter) {
    return diameter * PI;
}

void print_five_decimals(double value) {
    long scaled = (long)(value * 100000);  // 只取到小數點第五位(無條件捨去)
    printf("%ld.%05ld\n", scaled / 100000, scaled % 100000);
}

int main() {
    int i = 1; // output "3.14159"
    // int i = 2; // output "6.28318"
    // int i = 10; // output "31.41592"
    print_five_decimals(get_circumference(i));
    return 0;
}
