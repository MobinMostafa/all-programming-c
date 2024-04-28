#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

   for(int i=0; i<T; i++){
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int new_days = (D * M1) / (M1 + M2);

    
        int fewer_days = D - new_days;

        printf("%d\n", fewer_days);
    }

    return 0;
}
