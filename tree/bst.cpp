#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *inserttoBST(node *root, int data)
{
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }

    if (data < (root->data))
    {
        root->left = inserttoBST(root->left, data);
    }
    else
    {
        root->right = inserttoBST(root->right, data);
    }
    return root;
}

void takeinput(node *&root)
{

    int data;
    cin >> data;

    while (data != -1)
    {
        root = inserttoBST(root, data);
        cin >> data;
    }
}

void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        { // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            { // Still queue empty hai ya nhi
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

node *minval(node *root)
{
    node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

node *maxval(node *root)
{
    node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

node *deleteformbst(node *root, int d)
{
    // base case
    if (root == NULL)
    {
        return root;
    }

    if (root->data == d)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL && root->left != NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }

        // 2 child
        else if (root->left != NULL && root->right != NULL)
        {
            int mini = minval(root->right)->data;
            root->data = mini;
            root->right = deleteformbst(root->right, mini);
            return root;
        }
    }
    else if (root->data > d)
    {
        root->left=deleteformbst(root->left, d);
        return root;
    }
    else
    {
        root->right=deleteformbst(root->right, d);
        return root;
    }
}

int main()
{

    node *root = NULL;
    cout << "Enter data to insert in BST ";

    takeinput(root);

    cout << "Printing BST" << endl;
    levelordertraversal(root);

    node *min = minval(root);
    node *max = maxval(root);

    cout << "Minimum value: " << min->data;
    cout << "\nMaximum value: " << max->data;

    root = deleteformbst(root, 50);
    cout << endl;

    cout << "After deleting" << endl;
    cout << "Printing BST" << endl;
    levelordertraversal(root);

    return 0;
}