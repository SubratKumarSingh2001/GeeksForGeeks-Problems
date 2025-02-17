class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* ans = new Node(-1);
        Node* temp1 = head1;
        Node* temp2 = head2;
        Node* temp3 = ans;

        while(temp1 != NULL && temp2 != NULL) {
            if(temp1->data <= temp2->data) {
                temp3->next = temp1;
                temp1 = temp1->next;
                temp3 = temp3->next;
            }
            else if(temp1->data > temp2->data) {
                temp3->next = temp2;
                temp2 = temp2->next;
                temp3 = temp3->next;
            }
        }
        //when either of linked list becomes empty
        while(temp1) {
            temp3->next = temp1;
            temp1 = temp1->next;
            temp3 = temp3->next;
        }

        while(temp2) {
            temp3->next = temp2;
            temp2 = temp2->next;
            temp3 = temp3->next;
        }

        return ans->next;
    }
};
