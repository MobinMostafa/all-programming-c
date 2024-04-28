#include<stdio.h>

int main () {
     int N,M;
     scanf("%d %d",&N,&M);

     int A[N];
     for(int i=0;i<N;i++){
       scanf("%d",&A[i]);
     }
    
    int frequency[M+1];
    for(int i=1; i<=M; i++){
      frequency[i] = 0;
    }

    for(int i=0; i<N; i++){
      frequency[A[i]]++;
    }
    
    for(int i=1; i<=M; i++){
          printf("%d\n", frequency[i]);
    }
    
     return 0;
}