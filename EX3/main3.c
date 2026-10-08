#include <stdio.h>

void print_love_iu(int n) {
    if (n % 15 == 0) {
        printf("Love IU\n");
    } else if (n % 3 == 0) {
        printf("Love\n");
    } else if (n % 5 == 0) {
        printf("IU\n");
    } else {
        printf("%d\n", n);
    }
}

int main() {
    int i = 10; // output "IU"
    // int i = 3; // output "Love"
    // int i = 30; // output "Love IU"
    // int i = 1; // output "1"
    print_love_iu(i);
    return 0;
}
