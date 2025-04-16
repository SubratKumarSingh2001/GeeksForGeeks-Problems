class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        //if want to delete the head node of DLL
        if(x == 1) {
            head = head->next;
            head->prev = NULL;
            return head;
        }
        
        //Nodes other than head i.e last node and other node
        //TC: O(n), SC: O(1)
        int i=1;
        Node* temp = head;
        while(i < x-1) {
            temp = temp->next;
            i++;
        }
        
        if(temp->next->next != NULL) {
            Node* forward = temp->next;
            temp->next = forward->next;
            forward->next->prev = temp;
        }
        else {
            temp->next = NULL;
        }
        
        return head;
    }
};
