//Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.

#include<stdio.h>

int main () {
     int N;
     scanf("%d",&N);

     int A[N];
     for(int i=0; i<N; i++){
      scanf("%d", &A[i]);
     }

     int min_ind = A[0];
     int max_ind = A[0];

     for (int i=1; i<N; i++) {
      if(A[i] < min_ind){
        min_ind = A[i];
      }
      if(A[i] > max_ind){
       max_ind = A[i];
      }
     }

     for(int i=0; i<N; i++){
      if(A[i] == min_ind){
       A[i] = max_ind;
      }
      else if (A[i] == max_ind){
       A[i] = min_ind;
      } 
     }

     for(int i=0; i<N; i++){
      printf("%d ",A[i]);
     }
     return 0;
}