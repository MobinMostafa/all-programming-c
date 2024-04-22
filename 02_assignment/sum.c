#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int positiveSum = 0;
    int negativeSum = 0;

    for (int i = 0; i < N; ++i) {
        int num;
        scanf("%d", &num);

        if (num > 0) {
            positiveSum += num;
        } else if (num < 0) {
            negativeSum += num;
        }
    }

    printf("%d %d\n", positiveSum, negativeSum);
    return 0;
}
