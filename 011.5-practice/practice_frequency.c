#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Initialize an array to store the frequency of each number
    int frequency[M + 1];
    for (int i = 1; i <= M; i++) {
        frequency[i] = 0;
    }

    // Count occurrences for each number in array A
    for (int i = 0; i < N; i++) {
        frequency[A[i]]++;
    }

    // Print the frequency of each number from 1 to M
    for (int i = 1; i <= M; i++) {
        printf("%d\n", frequency[i]);
    }

    return 0;
}
