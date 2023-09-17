#include <stdio.h>
#include <stdlib.h>

typedef struct binaryTree
{
    struct binaryTree *left;
    int data;
    struct binaryTree *right;
} NODE;

NODE *ptr;
NODE *createNode(int);
NODE *insertLeft(NODE *, int);
NODE *insertRight(NODE *, int);
void preorderTraversal(NODE *);
void inorderTraversal(NODE *);
void postorderTraversal(NODE *);
void deleteTree(NODE *);
NODE *delete_node(NODE *);
NODE *find_node(NODE *, int);

void main()
{
    int data, choice;
    do
    {
        printf("\n\n1.Create Binary Tree");
        printf("\n2.Preorder Traversal");
        printf("\n3.Inorder Traversal");
        printf("\n4.Postorder Traversal");
        printf("\n5.Delete Node");
        printf("\n6.Delete Tree");
        printf("\n7.Exit");
        printf("\n\nEnter You choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter data: ");
            scanf("%d", &data);
            NODE *root = createNode(data);
            root = insertLeft(root, data);
            root = insertRight(root, data);
            break;

        case 2:
            printf("Preorder Traversal: ");
            preorderTraversal(root);
            break;

        case 3:
            printf("Inorder Traversal: ");
            inorderTraversal(root);
            break;

        case 4:
            printf("Postorder Traversal: ");
            postorderTraversal(root);
            break;

        case 5:
            root = delete_node(root);
            break;

        case 6:
            deleteTree(root);
            break;

        case 7:
            break;
        }
    } while (choice != 7);
}

NODE *createNode(int data)
{
    if (data == -1)
        return NULL;

    NODE *new_node = (NODE *)malloc(sizeof(NODE *));
    new_node->left = NULL;
    new_node->data = data;
    new_node->right = NULL;
    return new_node;
}

NODE *insertLeft(NODE *root, int data)
{

    printf("Enter Left For %d: ", data);
    scanf("%d", &data);
    if (data == -1)
        return NULL;

    root->left = createNode(data);
    insertLeft(root->left, data);
    insertRight(root, data);
    return root;
}

NODE *insertRight(NODE *root, int data)
{

    printf("Enter right For %d: ", data);
    scanf("%d", &data);
    if (data == -1)
        return NULL;

    root->right = createNode(data);
    insertLeft(root, data);
    insertRight(root->right, data);
    return root;
}

void preorderTraversal(NODE *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void inorderTraversal(NODE *root)
{
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

void postorderTraversal(NODE *root)
{
    if (root == NULL)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}

void levelOrderTraversal(NODE *root)
{
    int h = height(root);
    for (int i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}

void printCurrentLevel(NODE *root, int level)
{
    if (root == NULL)
        return NULL;

    if (level == 1)
        printf("%d", root->data);

    else if (level > 1)
    {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}

int find_height(NODE *root)
{
    if (root == NULL)
        return 0;

    else
    {
        int lheight = find_height(root->left);
        int rheight = find_height(root->right);

        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}


NODE *delete_node(NODE *root)
{
    int key;
    NODE *temp = NULL;
    printf("Enter node to be deleted: ");
    scanf("%d", &key);
    temp = find_node(root, key);

    if (temp == NULL)
    {
        printf("Element Not Found!!\n");
    }
    else if (!temp->left && !temp->right)
    {
        if (temp->data == key)
        {
            temp = NULL;
            free(temp);
        }
        return root;
    }

    else if (!root->left)
    {
        if (root->data == root->right->data)
            free(root->right);
        root->right = NULL;
    }

    else if (!root->right)
    {
        if (root->data == root->left->data)
            free(root->left);
        root->left = NULL;
    }
}

void deleteTree(NODE *root)
{
    if (root == NULL)
        return;

    deleteTree(root->left);
    deleteTree(root->right);

    printf("Deleteing Node : %d\n", root->data);
    free(root);

    return;
}

NODE *find_deepest_node(NODE *root, NODE *delete_node)
{
    if (root->right)
        find_deepest_node(root->left);
}


