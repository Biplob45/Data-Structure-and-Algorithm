// C program for different tree traversals
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
     int data;
     Node *left;
     Node *right;
};

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
Node *tree_create_node(int data)
{
     Node *node = (Node *) malloc(sizeof(Node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;

     return(node);
}

/* Given a binary tree, print its nodes according to the
  "bottom-up" postorder traversal. */
void post_order(Node *node)
{
     if (node == NULL)
        return;

     // first recur on left subtree
     post_order(node->left);

     // then recur on right subtree
     post_order(node->right);

     // now deal with the node
     printf("%d ", node->data);
}

/* Given a binary tree, print its nodes in inorder*/
void in_order(Node *node)
{
     if (node == NULL)
          return;

     /* first recur on left child */
     in_order(node->left);

     /* then print the data of node */
     printf("%d ", node->data);

     /* now recur on right child */
     in_order(node->right);
}

/* Given a binary tree, print its nodes in preorder*/
void pre_order(Node *node)
{
     if (node == NULL)
          return;

     /* first print data of node */
     printf("%d ", node->data);

     /* then recur on left sutree */
     pre_order(node->left);

     /* now recur on right subtree */
     pre_order(node->right);
}

/* Driver program to test above functions*/
int main()
{
     Node *root        = tree_create_node(1);
     root->left        = tree_create_node(2);
     root->right       = tree_create_node(3);
     root->left->left  = tree_create_node(4);
     root->left->right  = tree_create_node(5);

     printf("\nPreorder traversal of binary tree is \n");
     pre_order(root);

     printf("\nInorder traversal of binary tree is \n");
     in_order(root);

     printf("\nPostorder traversal of binary tree is \n");
     post_order(root);

     return 0;
}
