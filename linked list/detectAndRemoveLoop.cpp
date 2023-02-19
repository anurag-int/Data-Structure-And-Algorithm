class Solution
{
public:
    void removeLoop(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return;

        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                break;
        }

        if (fast == NULL || fast->next == NULL)
            return;

        slow = head;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }

        Node *prev = slow->next;
        while (prev->next != slow)
        {
            prev = prev->next;
        }

        prev->next = NULL;
    }
};
