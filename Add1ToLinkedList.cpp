class Solution {
  public:
    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        while(curr != NULL) {
            Node* forward = curr->next;
            curr->next = prev; 
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        //TC: O(n), SC: O(n) because ans node add of rem node until t1 null
        Node* t1 = reverse(head);
        Node* ans = new Node(-1);
        Node*t2 = ans;
        int sum = t1->data + 1;
        int rem = sum % 10;
        Node* newNode = new Node(rem);
        t2->next = newNode;
        t1 = t1->next;
        t2 = t2->next;
        
        int carry = sum/10;
        while(t1) {
            sum = t1->data + carry;
            rem = sum % 10;
            Node* newNode = new Node(rem);
            t2->next = newNode;
            t1 = t1->next;
            t2 = t2->next;
            carry = sum/10;
        }
        if(carry) {
            Node* newNode = new Node(carry);
            t2->next = newNode;
        }
        
        //now reverse the actual ans
        return reverse(ans->next);
    
    }
};
