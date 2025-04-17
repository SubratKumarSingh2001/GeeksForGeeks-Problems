class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {

        // Add code here
        //TC: O(n), where n is the no.of nodes in LL, SC: O(1)
        Node* temp = head;
        int zeros=0, ones=0, twos=0;
        while(temp != NULL) {
            if(temp->data == 0) zeros++;
            else if(temp->data == 1) ones++;
            else twos++;
            temp = temp->next;
        }
        //as of know wee have how many zeros, ones and twos in LL
        temp = head;
        while(zeros--) {
            temp->data = 0;
            temp = temp->next;
        }
        while(ones--) {
           temp->data = 1;
            temp = temp->next;
        }
        while(twos--) {
            temp->data = 2;
            temp = temp->next;
        }
        
        return head;
    }
};
