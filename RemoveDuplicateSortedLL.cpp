class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {
        // code here
        //TC: O(n) where n is no.of nodes in LL
        //SC: O(1)
        Node* temp = head;
        while(temp != NULL && temp->next != NULL) {
            if(temp->data != temp->next->data) {
                temp = temp->next;
            }
            else {
                Node* curr = temp->next;
                Node* forward = curr->next;
                temp->next = forward;
                curr->next = NULL;
                delete curr;
            }
        }
        return head;
    }
};
