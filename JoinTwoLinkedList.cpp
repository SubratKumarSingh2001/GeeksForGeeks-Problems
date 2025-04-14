Node * joinTheLists(Node * head1, Node * head2)
{
    //Your code here
    //TC: O(n1), n1 is length of head1 linked list, SC: O(1)
    Node* temp = head1;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head2;
    
    return head1;
}
