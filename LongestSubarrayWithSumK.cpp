#include <map>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    //TC: O(n^2), SC: O(1)
    int maxLen = 0;
    for(int i=0; i<a.size(); i++) {
        long long sum = 0;
        for(int j=i; j<a.size(); j++) {
            sum += a[j];
            if(sum == k) {
                maxLen = max(maxLen, j-i+1);
            }
            if(sum > k) break;
        }
    }
    return maxLen;

    //If the ele are +ve, -ve and 0 then hashmap is optimal solution
    //Better Solution: Using Hashmap 
    //TC: O(n), SC: O(n)
    int maxLen = 0;
    long long sum=0;
    map<long long, int> mpp;
    for(int i=0; i<a.size(); i++) {
        //sum compute kro baar baar
        sum += a[i];
        //ho sakta hai hamra sum jo hai wo k ke equal ho
        if(sum == k) {
            maxLen = max(maxLen, i+1);
        }

        /*check karenge ki sum-k present hai ki nhi agr hai means jo
        current element pe khde hai wo hmra subarray hoga*/
        long long rem = sum - k;
        //aab mein rem ko find krunga map me present hoga tabhi to subarray current me hai wo hamara k ke barabar hai
        if(mpp.find(rem) != mpp.end()) {
            maxLen = max(maxLen, i - mpp[rem]);
        }

        //aab last mein sare prefix sum ko map me dalte rehna hai, tabhi dalna agr wo sum present nah ho 
        if(mpp.find(sum) == mpp.end()) mpp[sum] = i;
    }
    return maxLen;

    //Optimal Solution: Two Pointers 
    //TC: O(2n ~= n), SC: O(1) //optimal for +ve number
    int i=0, j=0;
    long long sum = a[0];
    int maxLen = 0;
    while(j < a.size()) {
        while(sum > k) {
            sum -= a[i];
            i++;
        }
        if(sum == k) {
            maxLen = max(maxLen, j-i+1);
        }
        j++;
        sum += a[j];
    }
    return maxLen;
}
