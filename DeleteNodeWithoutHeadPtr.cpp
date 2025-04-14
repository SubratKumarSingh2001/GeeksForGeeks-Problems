class Solution {
  public:
    // Function to delete a node without any reference to the head pointer.
    void deleteNode(Node* del_node) {
        // Your code here
        //TC: O(1), SC: O(1)
        /*swapping the value of the next node with the node you want to 
        delete and isntead of deleting the given node we delete the next
        node so that duplicate element doesnt lie
        */
        
        Node* curr = del_node;
        Node* forward = curr->next;
        
        //swap values
        curr->data = forward->data;
        curr->next = forward->next;
        
        delete(forward);
    }
};
