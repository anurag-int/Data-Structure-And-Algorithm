#include<iostream>
using namespace std;

class Node
{
    //properties of Node of LINKED LIST
    public:
    int data;
    Node* next;

    //constructor  -> helps us to create a Node of linked list.
    Node(int x)
    {
        this-> data = x;
        this-> next = NULL;
    }

    // destructor -> helps us to destroy the a Node of linked list.
    Node()
    {
        int value = this -> data;
        //memory free
        if(this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};
    // function to insert node at Front of Linked List.
    void insertAtHead(Node* &head,int data)
    {
        Node* temp = new Node(data);
        temp -> next = head;
        head = temp;
    }


    // function to print the data in the Linked List.
    void printLinkedList(Node *&head)
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }

    // function to add node at tail in linked list.
    void insertAtTail(Node* &tail,int data)
    {
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }

    // function to add node at the middle of the linked list.
    void insertAtMiddle(Node* &head,Node* &tail,int position,int data)
    {
        
          Node* temp = head;
            int count = 1;
            while(count < position-1)
            {
                count++;
                temp = temp -> next;
            }
            Node* newNode = new Node(data);
            newNode -> next = temp -> next;
            temp -> next = newNode;
            
       
    }

    // function to count the total no of nodes of a linked list.
    int countTheNodes(Node* &head)
    {
        if(head==NULL)
        {
            return 0;
        }
        Node* temp = head;
        int count = 1;
        while(temp->next != NULL)
        {
            count++;
            temp = temp -> next;
        }
        return count;
        
    }

    // function to delete the node from a linked list.
    void deleteNode(Node* &head,int position)
    {
        if(position == 1)
        {
            Node* temp = head;
            head = head -> next;
            // memory free start node
            temp -> next = NULL;
            delete temp;
        }
        else
        {
            // deleting any middle node or last node
            Node* curr = head;
            Node* prev = NULL;

            int count = 1;
            while(count < position)
            {
                prev = curr;
                curr = curr -> next;
                count++;
            }

            prev -> next = curr -> next;
            curr-> next = NULL;
            delete curr;
        }
        
        
    }


    bool isEmpty(Node* &head)
    {
        if(head==NULL)
            return true;
        else
            return false;
    }

int main()
{
    Node* node1 = new Node(5);
    Node* head = node1; // created head node 
    Node* tail = node1; // created tail node

    insertAtHead(head,12);
    insertAtTail(tail,15);
    insertAtTail(tail,22);
    insertAtTail(tail,23);
    insertAtHead(head,10);
    

    insertAtMiddle(head,tail,3,50);
    printLinkedList(head);
    cout << countTheNodes(head) << endl;

    deleteNode(head,4);
    printLinkedList(head);

    cout <<  isEmpty(head) << endl;
    return 0;

}