class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        int count=0;
        Node* temp = head;
        while(temp != NULL) {
            count++;
            temp = temp->next;
        }
        
        if(head == NULL) {
            return head;
        }
        
        if(x == 1) {
            temp = head;
            head = head->next;
            head->prev = NULL;
            temp->next = NULL;
            delete temp;
            return head;
        }
        
        if(x == count) {
            temp = head;
            while(temp->next->next != NULL) {
                temp = temp->next;
            }
            Node* lastNode = temp->next;
            temp->next = NULL;
            lastNode->prev = NULL;
            delete lastNode;
            
            return head;
        }
        
        temp = head;
        int i=1;
        while(i<x-1) {
            temp = temp->next;
            i++;
        }
        Node* forward = temp->next; 
        temp->next = forward->next;
        forward->next->prev = temp;
        forward->next = NULL;
        forward->prev = NULL;
        delete forward;
        
        return head;
    }
};
