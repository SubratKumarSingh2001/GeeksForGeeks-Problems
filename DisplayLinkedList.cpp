vector<int> displayList(Node *head)
{
    //Your code here
    //TC: O(n), SC: O(n), where n is the no.of nodes in Linked List
    int cnt=0;
    Node* temp = head;
    while(temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    
    temp = head;
    vector<int> arr;
    int i=0;
    while(i < cnt) {
        arr.push_back(temp->data);
        temp = temp->next;
        i++;
    }
    
    return arr;
}
