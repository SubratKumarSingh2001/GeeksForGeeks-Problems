class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        //TC: 0(n), SC: O(1)
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr != NULL) {
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        
        return prev;
    }
};
