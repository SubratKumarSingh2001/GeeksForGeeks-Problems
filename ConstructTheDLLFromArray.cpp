Node* constructDLL(vector<int>& arr) {
    // Write your code here
    // to contruct the DLL with the help of given array
    //TC: O(n), SC: O(1)
    Node* head = NULL;
    Node* temp = head;
    for(int i=0; i<arr.size(); i++) {
        Node* newNode = new Node(arr[i]);
        if(head == NULL) {
            head = newNode;
            temp = head;
        }
        else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
    return head;
}
