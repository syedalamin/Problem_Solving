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

int linked_list_size(Node *head)
{
    Node *temp = head;

    if (temp == NULL)
    {
        return 0;
    }

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

    int size = linked_list_size(head);
    cout << size << "\n";

    return 0;
}