//03 problem: you will be given an not negative integer N . you need to tell if this number is divisible by 3 or not. if it divisible by 3 output "Yes" otherwise "No" . without Quetation mark
#include <stdio.h>

int main() {
    int N;
    // int sum = 0;

    // Input the non-negative integer

    scanf("%d", &N);

    // Calculate the sum of digits
    // int tempN = N;
    // while (tempN > 0) {
    //     sum += tempN % 10;
    //     tempN /= 10;
    // }

    // Check if the sum is divisible by 3
    if (N % 3 == 0) {
        printf("Yes \n");
    } else {
        printf("No \n");
    }

    return 0;
}
