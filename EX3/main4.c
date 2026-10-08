#include <stdio.h>

int check_odd(int n) {
    return n % 2 != 0;
}

int main() {
    int i = 10; // output "偶數"
    // int i = 3; // output "奇數"
    if (check_odd(i)) {
        printf("奇數\n");
    } else {
        printf("偶數\n");
    }
    return 0;
}
