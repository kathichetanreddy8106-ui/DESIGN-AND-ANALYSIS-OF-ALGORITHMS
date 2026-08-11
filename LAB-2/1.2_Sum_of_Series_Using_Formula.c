#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, sum;
    x = 5;
    n = 6;
    sum = (pow(x, n) - 1) / (x - 1);
    printf("Sum = %d", sum);
    return 0;
}
