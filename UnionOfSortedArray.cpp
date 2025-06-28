class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        
        // return vector with correct order of elements
        //Brute Force we can use set 
        // set<int> st;
        // for(int i=0; i<a.size(); i++) {
        //     st.insert(a[i]);
        // }
        // for(int i=0; i<b.size(); i++) {
        //     st.insert(b[i]);
        // }
        
        // //we have all the unique elements wiht union
        // vector<int> ans;
        // for(auto val : st) {
        //     ans.push_back(val);
        // }
        // return ans;
        
        //optimal Solution
        //TC: O(n+m)
        //SC: O(n+m), if all the elements are unique then side of union arr
        vector<int> unionArr;
        int n1 = a.size(), n2 = b.size();
        int i=0, j=0;
        while(i<n1 && j<n2) {
            if(a[i] <= b[j]) {
                if(unionArr.empty() || (unionArr.back() != a[i])) {
                    unionArr.push_back(a[i]);
                }
                i++;
            }
            else {
                if(unionArr.empty() || (unionArr.back() != b[j])) {
                    unionArr.push_back(b[j]);
                }
                j++;
            }
        }
        while(i<n1) {
            if(unionArr.empty() || (unionArr.back() != a[i])) {
                    unionArr.push_back(a[i]);
            }
            i++;
        }
        while(j<n2) {
            if(unionArr.empty() || (unionArr.back() != b[j])) {
                    unionArr.push_back(b[j]);
            }
            j++;
        }
        return unionArr;
    }
};
