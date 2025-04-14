class Solution {
  public:
    int GetNth(Node *head, int index) {
        // Code Here
        //TC: O(n), SC: O(1)
        int i=1;
        Node* temp = head;
        while(temp != NULL) {
            if(i == index) {
                return temp->data;
            }
            i++;
            temp = temp->next;
        }
        
        return -1;
    }
};
