#include <stdio.h>

int count_before_one(int arr[], int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == 1) {
            break;
        }
        count++;
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int rsl = count_before_one(arr, N);
    printf("%d\n", rsl);

    return 0;
}
