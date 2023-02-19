#include<iostream>
using namespace std;

class Node
{
    //properties
    public:
    int data;
    Node* next;
    Node* prev;
    
    //behaviour or constructor
    Node(int x)
    {
        this->data = x;
        this->prev = NULL;
        this->next = NULL;
    }
};


void print(Node* head)
{
    Node* curr = head;
    while(curr!=NULL)
    {
        cout << head->data << endl;
        curr = curr -> next;
    }
}

// insert at head function
void insertAtHead(Node* &head,Node* &tail,int d)
{
    if(head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

// insert at last of the linked list

void insertAtTail(Node* &head,Node* &tail,int data)
{
    if(tail == NULL)
    {
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node* temp = new Node(data);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insertAtMiddle(Node* &head,Node* &tail,int position,int data)
{
    //if there is no data in the LL
    if(position==1)
    {
        insertAtHead(head,tail,data);
        return;
    }
    else
    {
        Node* curr = head;
        int count = 1;
        while(count<position)
        {
            count++;
            curr = curr -> next;
        }
        Node* nodeToInsert = new Node(data);

        nodeToInsert -> next = curr -> next;
        curr -> next = nodeToInsert;
        nodeToInsert -> next -> prev = nodeToInsert;
        nodeToInsert -> prev = curr;
    }

    
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;


    Node* newNode = new Node(7);
    print(head);
    

}
