class Solution {
  public:
    Node* linkdelete(Node* head, int n, int m) {
        // code here
        //Brute Force
        /*TC: Outer-loop*inner-loop, Outer Loop : O(L/m+n) Approx val
        for outer loop and Inner Loop : O(m+n) 
        Total TC: O(L/m+n)*O(m+n) = O(l) where l = len of Ll
        */
        //SC: O(1)
        if (head->next == NULL)
        return head;

    Node *temp = head;
    while (temp)
    {
        // first we will skip the m-1 nodes
        for (int i = 0; i < m - 1; i++)
        {
            if (!temp)
                break; // this when the m nodes not there
            temp = temp->next;
        }

        // when temp become null come out of the loop
        if (!temp)
            break;

        // now delete the n nodes
        Node *del = temp->next;
        for (int i = 0; i < n; i++)
        {
            if (!del)
                break;
            Node *nodeDelete = del;
            del = del->next;
            delete (nodeDelete);
        }

        // now we will attach the pointer temp pointer to maintain LL
        temp->next = del;

        // now we will perform for the next segment
        temp = del;
    }

    return head;
        
        //we can do this with recursion... easy
    }
};
