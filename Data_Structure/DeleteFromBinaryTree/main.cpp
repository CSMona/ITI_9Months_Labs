// Remove node of binary search tree
//https://helloacm.com/how-to-delete-a-node-from-a-binary-search-tree/
#include <bits/stdc++.h>
using namespace std;

struct node {
    int key;
    struct node *left, *right;
};
struct node* newNode(int item)
{
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void Display(struct node* root)
{
    if (root != NULL) {
        Display(root->left);
        cout << root->key <<" ";
        Display(root->right);
    }
}
struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}

struct node* minValueNode(struct node* node)
{
    struct node* current = node;
    while (current && current->left != NULL)
        current = current->left;
        return current;
}
struct node* RemoveNode(struct node* root, int key)
{

    if (root == NULL)
        return root;

    if (key < root->key)
        root->left = RemoveNode(root->left, key);

    else if (key > root->key)
        root->right = RemoveNode(root->right, key);

    else {
        if (root->left==NULL and root->right==NULL)
            return NULL;
        else if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        struct node* temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = RemoveNode(root->right, temp->key);
    }
    return root;
}

int maxDepth(node *node)
{
    if(node==NULL)
        return 0;
    else
    {

        int leftDepth=maxDepth(node->left);
        int rightDepth=maxDepth(node->right);
        if(leftDepth>rightDepth)
            return leftDepth+1;
        else
            return rightDepth+1;
    }
}
int main()
{
    struct node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 40);
    root = insert(root, 30);
      root = insert(root, 60);
    root = insert(root, 70);
    root = insert(root, 35);
    root = insert(root, 65);
    /* root = insert(root, 15);
      root = insert(root, 8);
       root = insert(root, 12);
        root = insert(root, 60);*/
cout<<"max Level of tree :"<<maxDepth(root)<<"\n\n";
    cout << "The Nodes of tree :\n";
    Display(root);

    cout << "\n RemoveNode:\n\n";
    int value=2;
     cout << " \nThe Nodes of tree after remove "<<value<<" a node :\n\n";
    root = RemoveNode(root, value);

    Display(root);



    return 0;
}
