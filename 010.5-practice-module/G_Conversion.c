#include <stdio.h>
#include <ctype.h>

int main() {
    char S[100005];
    scanf("%s", S);

   
    for (int i = 0; S[i]; ++i) {
        if (S[i] == ',') {
            S[i] = ' ';
        }
    }


    for (int i = 0; S[i]; ++i) {
        if (isupper(S[i])) {
            S[i] = tolower(S[i]);
        } else if (islower(S[i])) {
            S[i] = toupper(S[i]);
        }
    }

    printf("%s\n", S);
    return 0;
}
