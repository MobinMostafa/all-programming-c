#include <stdio.h>
#include <stdlib.h>


void sortArray(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int t, n, i;
    scanf("%d", &t); 

    while(t--) {
        scanf("%d", &n); 
        int A[n], B[n], C[n]; 

   
        for (i = 0; i < n; i++) {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        sortArray(B, n); 

      
        for (i = 0; i < n; i++) {
            C[i] = abs(A[i] - B[i]);
        }

      
        for (i = 0; i < n; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
