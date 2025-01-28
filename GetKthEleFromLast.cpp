class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        //TC:O(n) and SC:O(1)
        Node* temp = head;
        int count=0;
        while(temp != NULL) {
            count++;
            temp=temp->next;
        }
        
        Node* curr = new Node(-1);
        curr->next = head;
        int i=1;
        while(i<=count-k+1) {
            curr = curr->next;
            i++;
        }
        
        return curr->data;
    }
};
