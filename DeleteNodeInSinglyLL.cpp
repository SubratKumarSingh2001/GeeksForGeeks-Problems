class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // cdoe here
        if(head == NULL) {
            return head;
        }
        
        if(x == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        
        Node* temp = head;
        int i=1;
        while(i<x-1) {
            temp = temp->next;
            i++;
        }
        
        Node* forward = temp->next; 
        temp->next = forward->next; 
        
        delete forward;
        
        return head;
        
    }
};
