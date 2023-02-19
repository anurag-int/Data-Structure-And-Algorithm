// Doubly Linked list have Node which Contain the data pointer to Next Node And A pointer to A previous NOde.   best eXample -----> Train
//                     Prev*<--[data]-->Next*
//                                                                 NULL<---[4]<--->[5]<--->[6]<--->[7]--->NULL

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node(int value)
    {
        this -> data = value;
        this -> prev = NULL;
        this -> next = NULL;
    }

    // descructor
    Node()
    {
        int value = this->data;
        if(next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory Free for node with data" << val << endl;
    }
    
};

    void print(Node* head)
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }

    int getLength(Node* head)
    {
        if(head == NULL)
            return -1;
        int count = 1;
        Node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp -> next;
            count++;
        }
        return count;
    }

    void insertAtHead(Node* &head, int n)
    {
        Node* newNode = new Node(n);
        if(head == NULL)
        {
            Node* newNode = new Node(n);
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head -> prev = newNode;
            head = newNode;
        }
        
    }

    void insertAtTail(Node* &head, int n)
    {
        Node* newNode = new Node(n);
       if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node* temp = head;
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = newNode;
            newNode -> prev = temp;
            
        }
    }

    void insertAtPosition(Node* &head, int p, int n )
    {
        // inserting at head
        if(p == 1)
            insertAtHead(head, n);
        Node* newNode = new Node(n);
        Node* temp = head;
        int count = 1; 
        while(count < p-1)
        {
            temp = temp -> next;
            count++;
        }

        // inserting at tail
        if(temp -> next == NULL)
        {
            insertAtTail(head,n);
        }

        // inserting at any position
        newNode -> next = temp -> next;
        newNode -> next -> prev = newNode;
        temp -> next = newNode;
        newNode -> prev =  temp;


    }

    void deleteAtHead(Node* &head)
    {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        head -> prev = NULL;
        delete(temp);
    }



int main()
{
    
    Node* head = NULL;
    print(head);
    // cout << getLength(head) << endl;
    insertAtHead(head, 5);
    print(head);
    insertAtHead(head, 2);
    print(head);
    insertAtTail(head, 100);
    print(head);
    insertAtPosition(head, 2,9);
    print(head);
    insertAtPosition(head, 3,111);
    print(head);
    insertAtPosition(head, 4,4);
    print(head);
    deleteAtHead(head);
    print(head);
    return 0;
} 