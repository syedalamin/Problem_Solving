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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }

    tail->next = newnode;
    tail = newnode;
}

void print_linked_list_and_size(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
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

    Node *head1 = NULL;
    Node *tail1 = NULL;

    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val1);
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

    int size1 = size_linked_list(head1);
    int size2 = size_linked_list(head2);

   
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