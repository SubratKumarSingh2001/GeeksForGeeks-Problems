
Node * insertAtTail(Node *head, int k) {
    // Write your code here
    //TC: O(n), SC: O(1)
    Node* newNode = new Node(k);
    //if head is null
    if(head == NULL) {
        head = newNode;
        return head;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;

    return head;
}
