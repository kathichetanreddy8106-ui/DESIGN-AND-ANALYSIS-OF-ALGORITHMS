#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *f = NULL, *r = NULL;

void NQ (int x) {
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = x;
    p->next = NULL;
    if (f == NULL) {
        f = r = p;
    }
    else {
        r->next = p;
        r = p;
    }
}

void DQ () {
    if (f == NULL) {
        printf("underflow\n");
    }
    else {
        struct Node *p = f;
        printf("DQ = %d\n", p->data);
        f = f->next;
        if (f == NULL) {
            r = NULL;
        }
        free (p);
    }
}

void display () {
    struct Node *p = f;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main () {
    NQ (10);
    NQ (20);
    NQ (30);
    display ();
    DQ ();
    return 0;
}
