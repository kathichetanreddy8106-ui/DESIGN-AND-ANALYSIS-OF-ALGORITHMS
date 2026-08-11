#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left, *right;
};
struct Node* insert(struct Node *root, int x)
{
    if(root == NULL)
    {
        root = malloc(sizeof(struct Node));

        root->data = x;
        root->left = NULL;
        root->right = NULL;

        return root;
    }
    if(x < root->data)
    {
        root->left = insert(root->left, x);
    }
    else
    {
        root->right = insert(root->right, x);
    }
    return root;
}
struct Node* delete(struct Node *root, int x)
{
    if(root == NULL)
    {
        return NULL;
    }

    if(x < root->data)
    {
        root->left = delete(root->left, x);
    }
    else if(x > root->data)
    {
        root->right = delete(root->right, x);
    }
    else
    {
        if(root->left == NULL)
        {
            struct Node *p = root->right;
            free(root);
            return p;
        }
        if(root->right == NULL)
        {
            struct Node *p = root->left;
            free(root);
            return p;
        }
        struct Node *p = root->right;
        while(p->left != NULL)
        {
            p = p->left;
        }
        root->data = p->data;
        root->right = delete(root->right, p->data);
    }
    return root;
}
void display(struct Node *root)
{
    if(root != NULL)
    {
        display(root->left);
        printf("%d ", root->data);
        display(root->right);
    }
}
int main()
{
    struct Node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 2);
    root = insert(root, 4);
    root = delete(root, 3);
    printf("Insertion and deletion completed\n");
    display(root);

    return 0;
}
