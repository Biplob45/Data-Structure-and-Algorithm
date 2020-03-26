#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *left;
    Node *right;
};

Node *tree_create_node(int item)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Error, Could Not Create A New Node");
        exit(1);
    }

    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}


void add_left_child(Node *node, Node *child)
{
    node->left = child;
}

void add_right_child(Node *node, Node *child)
{
    node->right = child;
}


Node *create_tree()
{
    Node *two = tree_create_node(2);
    Node *seven = tree_create_node(7);
    Node *nine = tree_create_node(9);
    add_left_child(two, seven);
    add_right_child(two, nine);

    Node *one = tree_create_node(1);
    Node *six = tree_create_node(6);
    add_left_child(seven, one);
    add_right_child(seven, six);
}


int main()
{
    Node *root = create_tree();

    printf("%d\n", root->data);

    return 0;
}
