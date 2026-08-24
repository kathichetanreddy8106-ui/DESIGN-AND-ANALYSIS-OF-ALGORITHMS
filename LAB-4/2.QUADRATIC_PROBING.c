#include <stdio.h>
#define SIZE 10

int main() {
    int h[SIZE], i, x, n, index, c;
    
    for (i = 0; i < SIZE; i++)
        h[i] = -1;
        
    printf("enter number of elements = ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        c = 0;
        do {
            index = (x % SIZE + c * c) % SIZE;
            c++;
        } while (h[index] != -1);
        h[index] = x;
    }
    
    for (i = 0; i < SIZE; i++)
        printf("Index %d : %d\n", i, h[i]);
        
    return 0;
}
