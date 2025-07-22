class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        //Brute Force :TC: O(n^2), SC: O(n)
        vector<int> ans;
        int max = *max_element(arr.begin(), arr.end());
        for (int i=0; i<arr.size(); i++) {
            int search = i+1, cnt=0;
            for(int j=0; j<arr.size(); j++) {
                if(arr[j] == search) cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
        
        //Better Solution : HashArray 
        //TC: O(n), SC: O(n)
        vector<int> ans;
        vector<int> hashArr(arr.size()+1, 0);
        for(int i=0; i<arr.size(); i++) {
            hashArr[arr[i]]++;
        }
        for(int i=1; i<hashArr.size(); i++) {
            ans.push_back(hashArr[i]);
        }
        return ans;
        
        //More Optimal Solution : map STLs
        //TC: SC: 
        vector<int> ans(arr.size(),0);
        map<int, int> mpp;
        for(int i=0; i<arr.size(); i++) {
            mpp[arr[i]]++;
        }
        for(auto it : mpp) {
            ans[it.first-1] = it.second;
        }
        return ans;
    }
};
