#include <stdio.h>
#include <Stdlib.h>
typedef struct binarySearchTree
{
    struct binarySearchTree *left;
    int data;
    struct binarySearchTree *right;
} NODE;

NODE *root = NULL, *ptr, *preptr, *new_node;
NODE *insertElement(int);
NODE *deleteElement(NODE *, int);
void preorderTraversal(NODE *);
void inorderTraversal(NODE *);
void postorderTraversal(NODE *);
void searchElement(NODE *, int);
int findSmallestElement(NODE *node);
int findLargestElement(NODE *node);
int totalNodes(NODE *);
int totalInternalNodes(NODE *);
int totalExternalNodes(NODE *);
int height(NODE *);
NODE *mirrorImage(NODE *);
NODE *deleteTree(NODE *);

void main()
{
    int option, val;
    do
    {
        printf("\n ******MAIN MENU******* \n");
        printf("\n 1. Insert Element");
        printf("\n 2. Preorder Traversal");
        printf("\n 3. Inorder Traversal");
        printf("\n 4. Postorder Traversal");
        printf("\n 5. Find the smallest element");
        printf("\n 6. Find the largest element");
        printf("\n 7. Search an element");
        printf("\n 8. Delete an element");
        printf("\n 9. Count the total number of nodes");
        printf("\n 10. Count the total number of external nodes");
        printf("\n 11. Count the total number of internal nodes");
        printf("\n 12. Determine the height of the tree");
        printf("\n 13. Find the mirror image of the tree");
        printf("\n 14. Delete the tree");
        printf("\n 15. Exit");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nEnter a value to be inserted: ");
            scanf("%d", &val);
            insertElement(val);
            break;
        case 2:
            printf("\n The elements of the tree are : ");
            preorderTraversal(root);
            break;
        case 3:
            printf("\n The elements of the tree are : \n");
            inorderTraversal(root);
            break;
        case 4:
            printf("\n The elements of the tree are : \n");
            postorderTraversal(root);
            break;
        case 5:
            printf("\n Smallest element is : %d", findSmallestElement(root));
            break;
        case 6:
            printf("\n Largest element is : %d", findLargestElement(root));
            break;
        case 7:
            printf("\n Enter the element to be search : ");
            scanf("%d", &val);
            searchElement(root, val);
            break;

        case 8:
            printf("\n Enter the element to be deleted : ");
            scanf("%d", &val);
            root = deleteElement(root, val);
            break;

        case 9:
            printf("\n Total no. of nodes = %d", totalNodes(root));
            break;

        case 10:
            printf("\n Total no. of external nodes = %d", totalExternalNodes(root));
            break;

        case 11:
            printf("\n Total no. of internal nodes = %d", totalInternalNodes(root));
            break;

        case 12:
            printf("\n The height of the tree = %d", height(root));
            break;

        case 13:
            root = mirrorImage(root);
            break;

        case 14:
            root = deleteTree(root);
            break;
        }
    } while (option != 15);
}

NODE *insertElement(int val)
{
    new_node = (NODE *)malloc(sizeof(NODE));

    new_node->data = val;
    new_node->left = NULL;
    new_node->right = NULL;

    if (root == NULL)
    {
        root = new_node;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        preptr = NULL;
        ptr = root;
        while (ptr != NULL)
        {
            preptr = ptr;
            if (val < ptr->data)
                ptr = ptr->left;
            else
                ptr = ptr->right;
        }
        if (val < preptr->data)
            preptr->left = new_node;
        else
            preptr->right = new_node;
    }
}

void preorderTraversal(NODE *node)
{
    if (node != NULL)
    {
        printf("%d ", node->data);
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }
}

void inorderTraversal(NODE *node)
{
    if (node != NULL)
    {
        inorderTraversal(node->left);
        printf("%d ", node->data);
        inorderTraversal(node->right);
    }
}

void postorderTraversal(NODE *node)
{
    if (node != NULL)
    {
        postorderTraversal(node->left);
        postorderTraversal(node->right);
        printf("%d ", node->data);
    }
}

int findSmallestElement(NODE *node)
{
    if ((node == NULL) || (node->left == NULL))
        return node->data;
    else
        return findSmallestElement(node->left);
}

int findLargestElement(NODE *node)
{
    if ((node == NULL) || (node->right == NULL))
        return node->data;
    else
        return findLargestElement(node->right);
}

void searchElement(NODE *node, int val)
{
    if (node != NULL)
    {
        if (node->data == val)
        {
            printf("Element Found");
            return;
        }
        else if (val < node->data)
            return searchElement(node->left, val);
        else if (val > node->data)
            return searchElement(node->right, val);
    }
    printf("Element not Found");
}

NODE *deleteElement(NODE *tree, int val)
{
    NODE *cur, *parent, *suc, *psuc, *ptr;
    if (tree->left == NULL)
    {
        printf("\n The tree is empty ");
        return (tree);
    }
    parent = tree;
    cur = tree->left;
    while (cur != NULL && val != cur->data)
    {
        parent = cur;
        cur = (val < cur->data) ? cur->left : cur->right;
    }
    if (cur == NULL)
    {
        printf("\n The value to be deleted is not present in the tree");
        return (tree);
    }
    if (cur->left == NULL)
        ptr = cur->right;
    else if (cur->right == NULL)
        ptr = cur->left;
    else
    {
        // Find the in–order successor and its parent
        psuc = cur;
        cur = cur->left;
        while (suc->left != NULL)
        {
            psuc = suc;
            suc = suc->left;
        }
        if (cur == psuc)
        {
            // Situation 1
            suc->left = cur->right;
        }
        else
        {
            // Situation 2
            suc->left = cur->left;
            psuc->left = suc->right;
            suc->right = cur->right;
        }
        ptr = suc;
    }
    // Attach ptr to the parent node
    if (parent->left == cur)
        parent->left = ptr;
    else
        parent->right = ptr;
    free(cur);
    return tree;
}

int totalNodes(NODE *node)
{
    if (node == NULL)
        return 0;
    else
        return (totalNodes(node->left) + totalNodes(node->right) + 1);
}

int totalExternalNodes(NODE *node)
{
    if (node == NULL)
        return 0;

    else if ((node->left == NULL) && (node->right) == NULL)
        return 1;

    else
        return (totalExternalNodes(node->left) + totalExternalNodes(node->right));
}

int totalInternalNodes(NODE *node)
{
    if (node == NULL || ((node->left == NULL) && (node->right == NULL)))
        return 0;

    else
        return (totalInternalNodes(node->left) + totalInternalNodes(node->right) + 1);
}

int height(NODE *node)
{
    int left_height, right_height;

    if (node == NULL)
        return 0;
    else
    {
        left_height = height(node->left);
        right_height = height(node->right);

        if (left_height > right_height)
            return (left_height + 1);
        else
            return (right_height + 1);
    }
}

NODE *mirrorImage(NODE *node)
{
    NODE *ptr;
    if (node != NULL)
    {
        mirrorImage(node->left);
        mirrorImage(node->right);
        ptr = node->left;
        ptr->left = ptr->right;
        node->right = ptr;
    }
    return node;
}

NODE *deleteTree(NODE *node)
{
    if (node != NULL)
    {
        deleteTree(node->left);
        deleteTree(node->right);
        free(node);
    }
    return node;
}