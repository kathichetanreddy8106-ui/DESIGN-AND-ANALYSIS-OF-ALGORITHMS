#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void push (int x) {
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL) {
        printf("stack overflow\n");
        return;
    }
    p->data = x;
    p->next = top;
    top = p;
}

void pop () {
    if (top == NULL) {
        printf("underflow\n");
    }
    else {
        struct Node *p = top;
        printf("popped = %d\n", p->data);
        top = top->next;
        free (p);
    }
}

void display () {
    struct Node *p = top;
    while (p) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

int main () {
    push (10);
    push (20);
    push (30);
    pop ();
    push (40);
    push (50);
    display ();
    return 0;
}
