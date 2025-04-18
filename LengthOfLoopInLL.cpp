class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        //TC: O(n), SC: O(1)
        //if no node is present in the Linked List
        if(head == NULL) return 0;
        if(head->next == NULL) return 0;
        
        //other the single nodes
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
        
        //check here if no loop detected
        if(fast == NULL || fast->next == NULL) return 0;
        
        //to find the starting point of loop
        while(slow != fast && fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        
        int cnt=1;
        while(fast->next != slow) {
            cnt++;
            fast = fast->next;
        }
        return cnt;
    }
};
