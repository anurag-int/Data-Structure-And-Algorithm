#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

void InsertAtHead(Node *head, Node *tail, int n)
{
    Node *newNode = new Node(n);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    return;
}

void InsertAtTail(Node *head,Node* tail, int n)
{
    Node *newNode = new Node(n);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
        return;
    }
}

void insertAtPosition(Node* head, Node* tail, int position, int n)
{
    Node* newNode = new Node(n);
    if(position == 1)
    {
        InsertAtHead(head, tail, n);
    }
    else
    {
        Node *curr = head;
        int count = 1;

        while(count < position-1)
        {
            curr = curr -> next;
            count++;
        }
        newNode -> next = curr -> next;
        curr -> next = newNode;

    }
}

void insertAtTail(Node* head, Node* tail, int n)
{
    Node *newNode = new Node(n);
    if(tail == NULL)
    {
        tail = newNode;
    }
    else
    {
        tail -> next = newNode;
        tail = newNode; 
    }
    return;
}

void printLinkedList(Node* head)
{
    if(head == NULL)
    {
        cout << "Linked List Is Empty";
    }
    else
    {
        Node *curr = head;
        while(curr != NULL)
        {
            cout << curr -> data << " ";
            curr = curr -> next;
        }
        cout << endl;
    }
}

void deleteNode(Node* & head, int position) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}

int main()
{
    Node *newNode = new Node(1);
    Node *head = newNode;
    Node *tail = newNode;

    InsertAtTail(head, tail, 2);
    InsertAtTail(head, tail, 3);
    InsertAtTail(head, tail, 4);
    InsertAtTail(head, tail, 6);
    InsertAtTail(head, tail, 7);
    InsertAtTail(head, tail, 8);
    InsertAtTail(head, tail, 9);
    InsertAtTail(head, tail, 10);
    printLinkedList(head);

    insertAtPosition(head, tail, 5, 5);

    printLinkedList(head);
}