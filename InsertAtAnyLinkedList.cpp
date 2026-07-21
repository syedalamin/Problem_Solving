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



void insert_at_any(Node * &head,int idx, int val){
    Node * newNode = new Node(val);

    Node * temp = head;

    for(int i = 1;i<idx;i++){
        temp = temp->next;
        if(temp == NULL){
            return;
        }
    }


    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;


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
    insert_at_any(head, 2, 30);

    print_forward(head);

    return 0;
}