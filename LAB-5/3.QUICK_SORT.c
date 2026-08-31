#include <stdio.h>

void quicksort(int a[], int l, int r) {
    if (l < r) {
        int i = l, j = r, p = a[l], t;
        while (i < j) {
            while (a[i] <= p && i < r)
                i++;
            while (a[j] > p)
                j--;
            if (i < j) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        a[l] = a[j];
        a[j] = p;
        quicksort(a, l, j - 1);
        quicksort(a, j + 1, r);
    }
}

int main() {
    int a[] = {5, 12, 8, 11, 33};
    int n = 5;
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
