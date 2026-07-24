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

void print_forward(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";

        temp = temp->next;
    }
}

void print_middle(Node *head)
{
    Node *temp = head;

    int size = 0;

    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    int idx = size / 2;

    Node *temps = head;

    for (int i = 0; i < idx; i++)
    {
        temps = temps->next;
    }

    if (size % 2 == 0)
    {

        cout << temps->prev->val << " " << temps->val;
    }
    else
    {
        cout << temps->val;
    }
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

    print_middle(head);
    // print_forward(head);

    return 0;
}