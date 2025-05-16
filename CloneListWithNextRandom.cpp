class Solution {
  public:
    Node *cloneLinkedList(Node *head) {
        // Write your code here
        Node* temp = head;
        while(temp) {
            Node* newNode = new Node(temp->data);
            newNode->next = temp->next; 
            temp->next = newNode;
            temp = temp->next->next;
        }

        /*Second: We will be pointing the random pointer of copy node to the node of the
        copy list*/
        temp = head;
        while(temp) {
            if(temp->random) { //here random pointer could be null to n-1
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }

        /*Third: We will be pointing the next pointer of copy node to the node of the 
        copy list*/
        temp = head;
        Node* dummyNode = new Node(-1);
        Node* ans = dummyNode;
        while(temp) {
            ans->next = temp->next;
            ans = ans->next;
            temp->next = ans->next;
            temp = temp->next;
        }

        //now return new head
        return dummyNode->next;
    }
};
