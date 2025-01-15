vector<int> subarraySum(vector<int> &arr, int target) {
    vector<int> temp;
    for(int i = 0; i < arr.size(); i++) {  
        int sum = 0;
        for(int j = i; j < arr.size(); j++) {  
            sum += arr[j];
            if(sum > target) {
                break;
            }
            else if(sum == target) {
                temp.push_back(i + 1);  
                temp.push_back(j + 1);  
                return temp;
            }
        }
    }
    temp.push_back(-1);
    return temp;
}
