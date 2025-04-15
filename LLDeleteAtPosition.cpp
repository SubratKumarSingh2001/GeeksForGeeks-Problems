Node * deleteAtPosition(Node *head,int pos)
{
    //Your code here
    //TC: Worse Case last element delete O(n), SC: O(1)
    //if pos == 1 head node delete
    if(pos == 1) {
        head = head->next;
        return head;
    }
    
    int i=1;
    Node* temp = head;
    while(i < pos-1) {
        temp = temp->next;
        i++;
    }
    Node* forward = temp->next;
    temp->next = forward->next;
    
    return head;
}
