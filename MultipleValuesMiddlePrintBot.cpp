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

void printMiddle(Node *head)
{
    Node *temp = head;

    int size = 0;

    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    int mididx = size / 2;

    if (size % 2 == 0)
    {
        Node *current = head;
        for (int i = 0; i < mididx -1; i++)
        {
          
            current = current->next;
        }
        cout<< current->val << " " << current->next->val << "\n";
    }
    else
    {
        Node* current = head;
        for (int i = 0; i < mididx; i++)
        {
           
            current = current->next;
        }

        cout<< current->val << "\n";

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

    printMiddle(head);

    return 0;
}