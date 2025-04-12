bool searchLinkedList(Node *head, int x)
{
    //Your code here
    //TC: O(n), SC: O(1), where n is the no.of nodes in the Linked List
    while(head != NULL) {
        if(head->data == x) return true;
        head = head->next;
    }
    return false;
}
