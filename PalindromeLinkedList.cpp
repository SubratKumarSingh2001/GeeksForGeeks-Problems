class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        //Approach:1 Brute Force, Convert this linked list into array then check palindrome
        //TC: O(n), SC: O(n)
        //if single node then it is always palindrome 
        if(head->next == NULL) return true;
        Node* temp = head;
        vector<int> ans;
        while(temp) {
            ans.push_back(temp->data);
            temp = temp->next;
        }
        //now we will aplly 2-pointers approach in array to check palindrome or not
        int i=0, j=ans.size()-1;
        bool flag = true;
        while(i <= j) {
            if(ans[i] == ans[j]) {
                i++;
                j--;
            }
            else {
                flag = false;
                break;
            }
        }
        return flag;
    }
};
