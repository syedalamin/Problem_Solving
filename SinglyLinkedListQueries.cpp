#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    Node *temp = head;

    newnode->next = temp;
    head = newnode;
}

void insert_at_any(Node *head, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;

        if (temp == NULL)
        {
            return;
        }
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;
}

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int size_linked_list(Node *head)
{
    int cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
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

    int t;
    cin >> t;
    while (t--)
    {
        int size = size_linked_list(head);
        int idx, val;

        cin >> idx >> val;

        if (idx == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (idx == size)
        {
            insert_at_tail(head, tail, val);
        }
        else if (idx > size)
        {
            cout << "Invalid" << "\n";
            continue;
        }
        else
        {
            insert_at_any(head, idx, val);
        }
        print_linked_list(head);
    }

    return 0;
}