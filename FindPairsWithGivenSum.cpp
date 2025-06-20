class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        //Brute Force 
        //TC: O(n^2), where  n is the lenght of Linked List
        //SC: O(k), where k is number of sorted pairs
        vector<pair<int, int>> res;
        Node* t1 = head;
        while(t1) {
            Node* t2 = t1->next;
            while(t2) {
                if(t1->data + t2->data == target) {
                    res.push_back({t1->data, t2->data});
                }
                else if(t1->data + t2->data > target) break;
                t2 = t2->next;
            }
            t1 = t1->next;
        }
        return res;
        
        //optimal Solution
        //TC: O(n). SC: O(K) , where k is the number of pairs
        Node* t1 = head;
        Node* t2 = head;;
        while(t2->next != NULL) {
            t2 = t2->next;
        }
        /*Now t2 points to the start node of doubly linked list and 
        t2 points to the end node of doubly linked list
        */
        while(t1->data < t2->data) {
            if(t1->data + t2->data == target) {
                res.push_back({t1->data, t2->data});
                t1 = t1->next;
                t2 = t2->prev; 
            }
            else if(t1->data + t2->data > target) {
                t2 = t2->prev;
            }
            else {
                t1 = t1->next;
            }
        }
        return res;
    }
};
