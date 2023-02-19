#include <iostream>
using namespace std;

class Node
{
    public:
    // behavior
    int data;
    Node *next;

    // constructor
    public:
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

void insertOfHeadLL(Node *head, int n)
    {
        Node *newNode = new Node(n);
        if (head == NULL)
        {
            newNode = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void insertOfTailLL(Node *head, int n)
    {
        Node* newNode = new Node(n);
        if(head == NULL)
        {
            newNode = head;
        }
        else
        {
            Node* curr = head;
            while(curr -> next != NULL)
            {
                curr = curr -> next;
            }
            curr -> next = newNode;
        }
    }

    int deletionAtTheHead(Node* head)
    {
        if(head == NULL)
        {
            return -1;
        }
        
        Node* prev = head;
        head = head -> next;
        int temp_data = prev->data;
        delete prev;
        return temp_data;
    }

    int deletionAtTheTail(Node* head)
    {
        if(head == NULL)
        {
            return -1;
        }
        else
        {
            Node* curr = head;
            while(curr -> next -> next != NULL)
            {
                curr = curr -> next;
            }

            Node* temp = curr -> next;
            curr -> next = NULL;
            int temp_data = temp->data;
            delete temp;
            return temp_data;

        }
    }

    void display(Node* head)
    {
        Node* curr = head;
        while(curr != NULL)
        {
            cout << curr -> data << " ";
            curr = curr -> next;
        }
        cout << endl;
    }



int main()
{
    
    Node* head = new Node(1);

    insertOfTailLL(head, 2);
    insertOfTailLL(head, 3);
    insertOfTailLL(head, 4);
    insertOfTailLL(head, 5);
    display(head);
    deletionAtTheTail(head);
    display(head);
    cout << deletionAtTheHead(head);
    display(head);
    
    
    
    
    return 0;
}