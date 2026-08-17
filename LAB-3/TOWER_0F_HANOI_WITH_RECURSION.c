#include <stdio.h>
void TOH (int n, char a, char b, char c) {
    if (n == 1) {
        printf("move disk 1 from %c to %c\n", a, c);
        return;
    }
    else {
        TOH (n-1, a, c, b);
        printf("move disk %d from %c to %c\n", n, a, c);
        TOH (n-1, b, a, c);
    }
}

int main () {
    int x = 3;
    TOH (x, 'A', 'B', 'C');
    return 0;
}
