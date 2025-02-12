class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> ans;
        
        //Method:1 Brute Force TC:O(n^2), SC:O(n);
        for(int i=0; i<arr.size(); i++) {
            int leader = arr[i];
            int j=i+1;
            for(; j<arr.size(); j++) {
                if(leader >= arr[j]) {
                    continue;
                }
                else {
                    break;
                }
            }
            if(j == arr.size()) {
                ans.push_back(leader);
            }
        }
        return ans;
        
          
        //Method:2 TC:O(n) SC:O(n) (Optimal Solutiion)
        int leader = arr[arr.size()-1];
        ans.push_back(leader);
        
        for(int i=arr.size()-2; i>=0; i--) {
            if(arr[i] >= leader) {
                leader = arr[i];
                ans.push_back(leader);
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
