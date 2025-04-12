#include <stdio.h>
#include <stdlib.h>

struct Node {
   int data;
   struct Node* left;
   struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {  // Checking if memory allocation is successful
        printf("Memory allocation failed!\n");
        return NULL;
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node in BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) return createNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}

// Inorder Traversal (Left -> Root -> Right)
void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left); 
    printf("%d ", root->data);  // Added space for better output formatting
    inorder(root->right);
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 70);
    insert(root, 30);
    insert(root, 80);
    insert(root, 50);
    insert(root, 40);

    printf("Inorder Traversal: ");
    inorder(root);
    printf("\n");  // Ensure output appears properly

    return 0;
}