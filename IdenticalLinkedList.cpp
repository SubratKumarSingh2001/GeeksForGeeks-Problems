class Solution {
  public:
    // Function to check if two linked lists are identical
    bool areIdentical(struct Node *head1, struct Node *head2) {
        // code here
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        while(temp1 != NULL && temp2 != NULL) {
            if(temp1->data == temp2->data) {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else {
                break;
            }
        }
        if(temp1 == NULL && temp2 == NULL) {
            return true;
        }
        else {
            return false;
        }
    }
};
