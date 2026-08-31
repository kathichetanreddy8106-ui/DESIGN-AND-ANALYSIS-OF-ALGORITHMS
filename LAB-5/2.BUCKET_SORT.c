#include <stdio.h>

void bucketsort(int a[], int n) {
    int bucket[100] = {0};
    for (int i = 0; i < n; i++) {
        bucket[a[i]]++;
    }
    for (int i = 0, k = 0; i < 100; i++) {
        while (bucket[i]--) {
            a[k++] = i;
        }
    }
}

int main() {
    int a[] = {56, 23, 81, 15, 39, 24};
    int n = 6;
    bucketsort(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
