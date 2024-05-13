#include <stdio.h>

int main() {
    int N, line, space, star, i, j;
    scanf("%d", &N);

  
    line = (N + 1) / 2 + 5;
    star = 1;
    space = line - 1;
    for(i = 0; i < line; i++) {
        for(j = 0; j < space; j++) {
            printf(" ");
        }
        for(j = 0; j < star; j++) {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

   
    space = ((line * 2) - 1 - N) / 2;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < space; j++) {
            printf(" ");
        }
        for(j = 0; j < N; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
