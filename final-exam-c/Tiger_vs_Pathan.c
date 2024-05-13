#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T); 

    while(T--) {
        scanf("%d\n", &N); 
        char S[N+1];
        fgets(S, N+1, stdin); 

        int tiger_wins = 0, pathan_wins = 0;
        for(int i = 0; i < N; i++) {
            if(S[i] == 'T') tiger_wins++;
            if(S[i] == 'P') pathan_wins++;
        }

        if(tiger_wins > pathan_wins) {
        printf("Tiger\n");
        }
        else if(pathan_wins > tiger_wins){
         printf("Pathaan\n");
        }
        else {
        printf("Draw\n");
        }
    }
    return 0;
}
