#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
   for(int i=1; i<=T; T--) {
      long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        
       
        if(A == 0 || B == 0 || C == 0) {
            if(M == 0) {
                printf("0\n"); 
            } else {
                printf("-1\n");
            }
        } else{
            long long int sum = A * B * C;
            if(M % sum == 0) {
            long long int missingNumber = M / sum;
             printf("%lld\n",missingNumber);
            } else {
                printf("-1\n");
            }
        }
    }
    
    return 0;
}
