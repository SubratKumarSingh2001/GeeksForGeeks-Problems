class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        //TC: O(n), SC: O(1)
        Node* temp = head;
        while(temp && temp->next != NULL) {
            Node* nextNode = temp->next;
            if(temp->data != nextNode->data) {
                temp = temp->next;
            }
            else {
                if(nextNode->next != NULL) {
                    nextNode = nextNode->next;
                    temp->next = nextNode;
                    nextNode->prev = temp;
                }
                else {
                    temp->next = NULL;
                }
            }
        }
        return head;
    }
};
