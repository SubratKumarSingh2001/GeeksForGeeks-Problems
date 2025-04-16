class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        //TC: O(n), SC: O(1)
        // Your code here
        if(head->next == NULL) return head;
        
        //if not single node 
        DLLNode* bef = NULL;
        DLLNode* curr = head;
        while(curr != NULL) {
            DLLNode* aft = curr->next;
            
            curr->next = bef;
            curr->prev = aft;
            
            bef = curr;
            curr = aft;
        }
        
        return bef;
    }
};
