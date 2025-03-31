class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        /*Brute Force, MERGE TWO SORTED ARRAY AND FIND THE Kth 
        POSTION IN SORTED ARRAY
        */
        //TC: O(m+n), SC: O(m+n)
        vector<int> ans;
        int i=0, j=0;
        while(i<a.size() && j<b.size()) {
            if(a[i] < b[j]) {
                ans.push_back(a[i]);
                i++;
            }
            else {
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i<a.size()) {
            ans.push_back(a[i]);
            i++;
        }
        while(j<b.size()) {
            ans.push_back(b[j]);
            j++;
        }
        
        return ans[k-1];
        
        //Optimal Will Do it Later......
    }
};
