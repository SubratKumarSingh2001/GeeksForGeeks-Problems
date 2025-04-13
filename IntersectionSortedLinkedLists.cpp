class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        //TC: O(n+m), SC: O(n+m)
        Node* ans = new Node(-1);
        Node* temp1 = head1;
        Node* temp2 = head2;
        Node* temp3 = ans;
        while(temp1 != NULL && temp2 != NULL) {
            if(temp1->data == temp2->data) {
                //handling duplicate in ans linked list
                if(temp3->data != temp1->data) {
                    Node* newNode = new Node(temp1->data);
                    temp3->next = newNode;
                }
                temp1 = temp1->next;
                temp2 = temp2->next;
                temp3 = temp3->next;
            }
            else if(temp1->data < temp2->data) {
                temp1 = temp1->next;
            }
            else {
                temp2 = temp2->next;
            }
        }
        return ans->next;
    }
};
