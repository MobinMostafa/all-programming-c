#include <stdio.h>

int Consonants(char c) {
    switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            return 0; 
        default:
            return 1; 
    }
}

int main() {
    char S[100001];
    scanf("%s", S);

    int consonantCount = 0;

    for (int i = 0; S[i] != '\0'; ++i) {
        if (Consonants(S[i])) {
            consonantCount++;
        }
    }

    printf("%d\n", consonantCount);

    return 0;
}
