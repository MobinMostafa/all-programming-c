// #include<stdio.h>

// int main () {
//      int N;
//      scanf("%d",&N);
//      if(N>0){
//         for(int i =1; i<=N; ++i){
//             printf("%d ",i);
//         }
//      }else{
//           for (int i=N; i >= 0; i--) {
//             printf("%d ", i);
//         }
//      }
//      return 0;
// }


// #include <stdio.h>

// int main() {
//     int N;

//     // Input the value of N
//     printf("Enter an integer N: ");
//     scanf("%d", &N);

//     if (N > 0) {
//         // If N is positive, print from 1 to N
//         for (int i = 1; i <= N; ++i) {
//             printf("%d ", i);
//         }
//     } else {
//         // If N is non-positive, print from N to 0
//         for (int i = N; i >= 0; --i) {
//             printf("%d ", i);
//         }
//     }

//     printf("\n"); // Print a newline for better formatting
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);

//     if (N > 0) {
//         // If N is positive, print from 1 to N
//         for (int i = 1; i <= N; ++i) {
//             printf("%d ", i);
//         }
//     } else {
//         // If N is non-positive, print from N to 0
//         for (int i=N; i >=0; ++i) {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }



#include <stdio.h>

int main() {
    int N;
  
    scanf("%d", &N);

    if (N > 0) {
        // Print from 1 to N
        for (int i = 1; i <= N; ++i) {
            printf("%d ", i);
        }
    } else {
        // Print from N to 0
        for (int i = N; i <= 0; ++i) {
            printf("%d ", i);
        }
    }

    return 0;
}

