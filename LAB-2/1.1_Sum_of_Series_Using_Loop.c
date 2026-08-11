#include <stdio.h>
int main()
{
    int x = 5, n = 6, i;
    int term = 1, sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + term;
        term = term * x;
    }
    printf("Sum = %d", sum);
    return 0;
}
