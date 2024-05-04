// #include <stdio.h>

// void Bubble_Sort(int arr[], int n) {
//     for (int i = 1; i < n; ++i) {
//         for (int j = 0; j <= (n - i - 1); ++j) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap elements
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int n; // Number of elements
//     scanf("%d", &n);
    
//     int arr[n]; // Input array
//     for (int i = 0; i < n; ++i) {
//         scanf("%d", &arr[i]);
//     }

//     Bubble_Sort(arr, n);


//     for (int i = 0; i < n; ++i) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


#include <stdio.h>

void Selection_Sort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
       
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int n; 
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    Selection_Sort(arr, n);


    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

