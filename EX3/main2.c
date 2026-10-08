#include <stdio.h>

int check_power_of_two(int n) {
    if (n < 2) {
        return 0;
    }
    return (n & (n - 1)) == 0;
}

int main() {
    int i = 10; // 否
    // int i = 8; // 是
    if (check_power_of_two(i)) {
        printf("是\n");
    } else {
        printf("否\n");
    }
    return 0;
}
