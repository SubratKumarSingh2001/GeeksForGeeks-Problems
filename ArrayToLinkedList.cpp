class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        //Brute force
        Node* head = NULL;
        int i=0; 
        while(i<arr.size()) {
            Node* newNode = new Node(arr[i]);
            if(head == NULL) {
                head = newNode;
            }
            else {
                Node* temp = head;
                while(temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
        return head;
        
        //Optimal Solution
        //TC: O(n), for loop to iterate through all the elements of array
        //SC: O(n), creating a linked list which depends on size of arr
        Node* ans = new Node(-1);
        Node* temp = ans;
        for(int i=0; i<arr.size(); i++) {
            Node* newNode = new Node(arr[i]);
            temp->next = newNode;
            temp = temp->next;
        }
        return ans->next;
    }
};
