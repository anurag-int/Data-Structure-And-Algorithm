public static void removeLoop(Node head){

        // code here

        // remove the loop without losing any nodes

        Node slow = head;

        Node fast = head;

        Node prev = head;

 

        // detect loop

        while (fast != null && fast.next != null){

            prev = slow;

            slow = slow.next;

            fast = fast.next.next;

 

            if (slow == fast){

                break;

            }

        }

 

        // if loop exist

        if (slow == fast){

            fast = head;

            while (slow != fast){

                prev = slow;

                slow = slow.next;

                fast = fast.next;

            }

            prev.next = null;

        }

    }