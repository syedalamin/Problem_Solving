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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;

    head = newNode;
}

void insert_at_any(Node *&head, Node *&tail, int idx, int val)
{

    Node *newNode = new Node(val);

    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            return;
        }
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;

    newNode->prev = temp;
    temp->next = newNode;
}

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

int print_size(Node *head)
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

void print_forward(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
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

    int t;
    cin >> t;

    while (t--)
    {
        int idx, newVal;
        cin >> idx >> newVal;

        int size = print_size(head);

        if (idx == 0)
        {
            insert_at_head(head, tail, newVal);
        }
        else if(idx == size){
            insert_at_tail(head, tail, newVal);
        }
        else if(idx > size){
            cout<< "Invalid"<< "\n";
            continue;
        }
        else{
            insert_at_any(head, tail, idx, newVal);
        }

        print_forward(head);
        cout<< '\n';
    }

    return 0;
}