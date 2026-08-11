#include <stdio.h>
int main()
{
    int a[6] = {2, 1, 9, 5, 4, 3};
    int n = 6, i, j, temp, k = 3;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The %dth smallest number in the array is %d", k, a[k - 1]);

    return 0;
}
