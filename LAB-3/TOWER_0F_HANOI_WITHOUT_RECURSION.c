#include <stdio.h>
void move (char a, char b) {
    printf("move from %c to %c\n", a, b);
}

int main () {
    int n = 3;
    int total = (1 << n) - 1;
    char a = 'A', b = 'B', c = 'C', t;

    if (n % 2 == 0) {
        t = b;
        b = c;
        c = t;
    }
    for (int i = 1; i <= total; i++) {
        if (i % 3 == 1) {
            move (a, c);
        }
        else if (i % 3 == 2) {
            move (a, b);
        }
        else if (i % 3 == 0) {
            move (b, c);
        }
    }
    return 0;
}
