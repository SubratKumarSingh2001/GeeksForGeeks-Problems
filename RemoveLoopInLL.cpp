class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        if(head == NULL || head->next == NULL) return;
        
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            
            if(slow == fast) {
                slow = head;
                break;
            }
        }
        
        //when no loop is present
        if(fast == NULL || fast->next == NULL) return;
        
        Node* prev = fast;
        //this case when the slow and fast points to head
        if(slow == head && fast == head) {
            while(prev->next != fast) {
                prev = prev->next;
            }
        }
        else {
            //slow and fast pointing to the nodes other than head node
            while(slow != fast && fast != NULL) {
                fast = fast->next;
                slow = slow->next;
                if(slow != fast) prev = prev->next;
            }
        }
        prev->next = NULL;
    }
};
