class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        //TC: O(n), SC: O(1)
        //Brute Force 
        if(head == NULL|| head->next == NULL) return false;
        
        Node* temp = head;
        while(temp) {
            if(temp->next == head) return true;
            temp = temp->next;
        }
        return false;
        
        //Tortoise-Hare Algorithm
        if(head == NULL|| head->next == NULL) return false;
        
        Node* slow = head;
        Node* fast = head;
        while(fast && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            
            if(slow == fast) return true;
        }
        
        return false;
    }
};
