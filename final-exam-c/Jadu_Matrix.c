#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    
    if (n != m) {
        printf("NO\n");
        return 0;
    }
    
    int value, Jadu = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &value);
          
            if ((i == j || i == n - j - 1) && value != 1) {
                Jadu = 0;
            }
          
            else if (i != j && i != n - j - 1 && value != 0) {
                Jadu = 0;
            }
        }
    }
    
    if (Jadu) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
