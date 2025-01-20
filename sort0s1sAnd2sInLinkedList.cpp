class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {

        // Add code here
        int count=0;
        Node* temp = head;
        while(temp != NULL) {
            count++;
            temp = temp->next;
        }
        
        temp=head;
        int zeros=0, ones=0, twos=0;
        while(count) {
            if(temp->data == 0) {
                zeros++;
            }
            else if(temp->data == 1) {
                ones++;
            }
            else if(temp->data == 2) {
                twos++;
            }
            temp = temp->next;
            count--;
        }
        
        temp = head;
        while(zeros--) {
            temp->data = 0;
            temp = temp->next;
        }
        while(ones--) {
            temp->data = 1;
            temp = temp->next;
        }
        while(twos--) {
            temp->data = 2;
            temp = temp->next;
        }
        
        return head;
    }
};
