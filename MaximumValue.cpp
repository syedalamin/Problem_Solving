#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

void maximum_value(Node *head)
{
    Node *temp = head;

    int mx = INT_MIN;

    while (temp != NULL)
    {
        mx = max(mx, temp->val);
        temp = temp->next;
    }
    cout << mx << "\n";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    maximum_value(head);

    return 0;
}