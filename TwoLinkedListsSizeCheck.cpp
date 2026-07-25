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
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

void print_forward(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int linked_list_size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
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

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;

    while (true)
    {
        cin >> val2;

        if (val2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val2);
    }

    int size1 = linked_list_size(head);

    int size2 = linked_list_size(head2);

    if (size1 == size2)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}