class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        //Brute Force: By creatig a Dummy Array
        //TC: O(n), SC: O(n)
        vector<int> ans;
        ans.push_back(arr[n-1]);
        for(int i=0; i<n-1; i++) {
            ans.push_back(arr[i]);
        }
        arr = ans; //to make changes in original array
        
        //optimal Solution
        //TC: O(n), SC: O(1)
        int last = arr[n-1];
        for(int i=n-1; i>0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = last;
    }
};
