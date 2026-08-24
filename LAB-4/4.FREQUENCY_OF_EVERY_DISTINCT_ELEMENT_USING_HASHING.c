#include <stdio.h>
#define SIZE 100

int main() {
    int a[SIZE], h[SIZE] = {0};
    int n, i;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        h[a[i]]++;
    }
    
    for (i = 0; i < SIZE; i++) {
        if (h[i] > 0) {
            printf("%d : %d\n", i, h[i]);
        }
    }
    
    return 0;
}
