class Solution {
  public:
    // Function to insert a node at the begining of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        Node* newNode = new Node(x);
        if(head == NULL) {
            head = newNode;
            return head;
        }
        
        newNode->next = head;
        head = newNode;
        
        return head;
    }
};
