#include <stdio.h>
#include<stdlib.h>


struct Node
{
   int data;
   struct Node* left;
   struct Node* right;
};

struct Node* createNode(int value){
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Checking if the memory allocation is fails
    if (!newNode)
    {
        printf("memory allocation is failed!\n");
        return NULL; 
    }
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
   
}

struct Node* insertNode(struct Node* root, int value){
    if (root == NULL) return createNode(value);

    if(value < root->data)
        root->left = insertNode(root->left, value);

    else
        root->right = insertNode(root->right, value);
    return root;

}

// InOrder traversal of BST 
void inOrder(struct Node* root){
    if(root == NULL) return;

    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}




int main() {
struct Node* root = NULL;
 root = insertNode(root,12);
 insertNode(root,232);
 insertNode(root,14);
 insertNode(root,7);
 insertNode(root,123);
printf("Traversal of Tree is: ");
 inOrder(root);
 printf("\n");
    return 0;
}