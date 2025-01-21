vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        vector<int> ans;
        int i=0, j=0, k=0;
        while(i<arr1.size() && j<arr2.size() && k<arr3.size()) {
            if(arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
                if(ans.empty()) {
                    ans.push_back(arr1[i]);
                }
                else if(ans[ans.size()-1] != arr1[i]) {
                    ans.push_back(arr1[i]);
                }
                i++;
                j++;
                k++;
            }
            else if(arr1[i] < arr2[j]) {
                i++;
            }
            else if(arr2[j] < arr3[k]) {
                j++;
            }
            else {
                k++;
            }
        }
        
        return ans;
    }
