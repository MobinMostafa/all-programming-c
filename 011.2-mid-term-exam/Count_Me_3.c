#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int i=0; i<T; i++) {
        char S[10001]; 
        scanf("%s", S);

        int small = 0, capital = 0, digits = 0;
       
        for (int i=0; S[i] != '\0'; i++) {
            if (S[i] >= 'A' && S[i] <= 'Z') {
                capital++;
            } else if (S[i] >= 'a' && S[i] <= 'z') {
                small++;
            } else if (S[i] >= '0' && S[i] <= '9') {
                digits++;
            }
        }

      
        printf("%d %d %d\n", capital, small, digits);
    }

    return 0;
}
