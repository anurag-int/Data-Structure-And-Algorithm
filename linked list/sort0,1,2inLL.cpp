class Solution

{

    public:

    //Function to sort a linked list of 0s, 1s and 2s.

    Node* segregate(Node *head) {

        

        // Add code here

        int Zero=0;

        int One=0;

        int Two=0;

        Node* sort= head;

        // Counting total number of Zeroes , Ones and Twos.

        

        while(sort!=NULL)

        {

            if(sort->data== 0)

            {

                Zero++;

            }

            else if(sort->data== 1)

            {

                One++;

            }

            else 

            {

                Two++;

            }

            sort=sort->next;

        }

         //Again pointing sort to the head of the linked lists.

         sort=head;

         

         // Overwriting Ones , Zeroes and Twos in the linked lists

          while(sort!=NULL)
          {

            if(Zero>0)

            {

                sort->data=0;

                Zero--;

            }

            else if(One>0)

            {

                sort->data =1;

                One--;

            }

            else

            {

                sort->data=2;

                Two--;

            }

            sort=sort->next;

        }

        return head;

    }

};