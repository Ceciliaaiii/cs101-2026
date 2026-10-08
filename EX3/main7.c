#include <stdio.h>

const int BASE_DISTANCE = 1500;
const int BASE_FARE = 70;
const int STEP_DISTANCE = 100;
const int STEP_FARE = 10;

int get_taxi_fare(int meters) {
    if (meters <= BASE_DISTANCE) {
        return BASE_FARE;
    }
    int extra = meters - BASE_DISTANCE;
    int steps = (extra + STEP_DISTANCE - 1) / STEP_DISTANCE;  // 不足100公尺以100公尺計
    return BASE_FARE + steps * STEP_FARE;
}

int main() {
    int i = 1000; // output "70元"
    // int i = 1540; // output "80元"
    // int i = 3000; // output "220元"
    printf("%d元\n", get_taxi_fare(i));
    return 0;
}
