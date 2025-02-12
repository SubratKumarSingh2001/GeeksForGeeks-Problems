class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        //TC: O(n^2) SC:O(n)
        vector<int> ans;
        ans.push_back(arr[0]);
        for(int i=1; i<arr.size(); i++) {
            if(arr[i] != ans[ans.size()-1]) {
                ans.push_back(arr[i]);
            }
        }
        //modify the original array distinct element comes at beginning
        for(int i=0; i<arr.size(); i++) {
            arr[i] = ans[i];
        }
        
        return ans.size();
    }
};
