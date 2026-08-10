#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *inputTree()
{
    int val;
    cin >> val;
    Node *root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *newLeft;
        Node *newRight;

        if (l == -1)
            newLeft = NULL;
        else
            newLeft = new Node(l);

        if (r == -1)
            newRight = NULL;
        else
            newRight = new Node(r);

        p->left = newLeft;
        p->right = newRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

int cntNode(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int l = cntNode(root->left);
    int r = cntNode(root->right);

    return l + r + 1;
}

int main()
{
    Node *root = inputTree();

    int cnt = cntNode(root);

    cout << cnt ;
    return 0;
}