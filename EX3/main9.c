#include <stdio.h>

int get_abs(int n) {
    return (n < 0) ? -n : n;
}

int get_number(int x, int y, int z) {
    int sum = get_abs(x) * 100 + get_abs(y) * 10 + get_abs(z);
    return (x < 0) ? -sum : sum;
}

int main() {
    int x = 9;
    int y = 9;
    int z = 1;
    // output 991
    // int x = 1;
    // int y = 2;
    // int z = 3;
    // output 123
    // int x = -9; y = 9; z = 1; -> output -991
    printf("%d\n", get_number(x, y, z));
    return 0;
}
