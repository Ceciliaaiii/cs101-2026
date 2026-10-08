#include <stdio.h>

const int FREE_MINUTES = 30;
const int PRICE_PER_HALF_HOUR = 30;
const int MAX_FEE = 240;

int get_parking_fee(int minutes) {
    if (minutes <= FREE_MINUTES) {
        return 0;
    }
    int half_hours = (minutes + 29) / 30;  // 不滿半小時以半小時計
    int fee = half_hours * PRICE_PER_HALF_HOUR;
    return (fee > MAX_FEE) ? MAX_FEE : fee;
}

int main() {
    int i = 20; // output "免費"
    // int i = 40; // output "60元"
    // int i = 300; // output "240元"
    int fee = get_parking_fee(i);
    if (fee == 0) {
        printf("免費\n");
    } else {
        printf("%d元\n", fee);
    }
    return 0;
}
