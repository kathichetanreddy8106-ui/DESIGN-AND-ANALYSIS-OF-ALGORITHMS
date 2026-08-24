#include <stdio.h>
#define SIZE 10

int main() {
    int h[SIZE], i, x, n, index;
    
    for (i = 0; i < SIZE; i++)
        h[i] = -1;
        
    printf("enter number of elements = ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        index = x % SIZE;
        while (h[index] != -1)
            index = (index + 1) % SIZE;
        h[index] = x;
    }
    
    for (i = 0; i < SIZE; i++)
        printf("Index %d : %d\n", i, h[i]);
        
    return 0;
}
