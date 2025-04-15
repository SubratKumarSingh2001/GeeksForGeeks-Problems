Node* insert(int k, int val, Node *head) {
    // Write Your Code Here.
    //TC: Worse case if want to insert at last, TC: O(n), SC: O(1)
    //if want to insert at the head, explicitly handling this case
    if(k == 0) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return head;
    }

    Node* temp = head;
    Node* newNode = new Node(val);
    int i=0;
    while(i < k-1) {
        temp = temp->next;
        i++;
    }
    //if it is last node
    if(temp->next == NULL) {
        temp->next = newNode;
        newNode->prev = temp;
    }
    else { //nodes other than last nodes
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }

    return head;
}
