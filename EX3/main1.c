#include <stdio.h>

void print_spaces(int rows, int r) {
    for (int sp = 0; sp < rows - r; sp++) {
        printf(" ");
    }
}

void print_numbers(int r) {
    for (int i = 0; i < r; i++) {
        printf("%d ", r);
    }
    printf("\n");
}

int main() {
    int rows = 6;
    for (int r = 1; r <= rows; r++) {
        print_spaces(rows, r);
        print_numbers(r);
    }
    return 0;
}
