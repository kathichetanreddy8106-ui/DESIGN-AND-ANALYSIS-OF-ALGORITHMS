#include <stdio.h>
#define SIZE 100

int main() {
    int a[SIZE], h[SIZE] = {0};
    int n, T, i, x;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &T);
    
    for (i = 0; i < n; i++) {
        x = T - a[i];
        if (x >= 0 && x < SIZE && h[x]) {
            printf("yes");
            return 0;
        }
        if (a[i] >= 0 && a[i] < SIZE) {
            h[a[i]] = 1;
        }
    }
    
    printf("No");
    return 0;
}
