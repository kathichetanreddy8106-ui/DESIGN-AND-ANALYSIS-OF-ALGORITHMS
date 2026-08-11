#include <stdio.h>
void merge(int a[], int l, int m, int r)
{
    int i = l;
    int j = m + 1;
    int k = 0;
    int b[100];
    while(i <= m && j <= r)
    {
        if(a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    while(i <= m)
    {
        b[k++] = a[i++];
    }
    while(j <= r)
    {
        b[k++] = a[j++];
    }
    for(i = l, k = 0; i <= r; i++, k++)
    {
        a[i] = b[k];
    }
}
void sort(int a[], int l, int r)
{
    if(l < r)
    {
        int m = (l + r) / 2;
        sort(a, l, m);
        sort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
int main()
{
    int a[6] = {2, 1, 9, 5, 4, 3};
    int n = 6, k = 3;
    sort(a, 0, n - 1);
    printf("The %dth smallest number in the array is %d", k, a[k - 1]);

    return 0;
}
