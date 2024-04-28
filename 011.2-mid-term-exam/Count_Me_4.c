#include <stdio.h>
#include <string.h>

int main() {
    char S[10001];
    scanf("%s", S);

    int count[26] = {0}; 

    for (int i = 0; i < strlen(S); i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            count[S[i] - 'a']++;
        }
    }

    
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}
