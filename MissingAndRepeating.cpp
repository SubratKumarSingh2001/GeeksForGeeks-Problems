vector<int> findTwoElement(vector<int>& arr) {
        // code here
        //duplicate element finding method 
        int ans=-1, duplicate=-1;
        for(int i=0; i<arr.size(); i++) {
            int index = abs(arr[i])-1;
            if(arr[index] < 0) {
                duplicate = index+1;
            }
            else {
                arr[index] *= ans;
            }
        }
        //missing
        int missing=-1;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] > 0) {
                missing = i+1;
                break;
            }
        }
        
        return{duplicate, missing};
        
    }

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        //Brute Force, TC: O(n^2), SC: O(1)
        int missing = -1, repeating = -1;
        for(int i=1; i<=arr.size(); i++) {
            int cnt=0;
            for(int j=0; j<arr.size(); j++) {
                if(arr[j] == i) cnt++;
            }
            if(cnt==2) repeating = i;
            if(cnt==0) missing = i;
            if(missing != -1 && repeating != -1) break;
        }
        return {repeating, missing};   
        
        //Better Solution: Using hasharray and storing all frequecies
        //TC: O(2n), SC:O(n)
        int miss=-1, rep=-1;
        vector<int> hashArr(arr.size()+1, 0);
        for(int i=0; i<arr.size(); i++) {
            hashArr[arr[i]]++;
        }
        for(int i=1; i<hashArr.size(); i++) {
            if(hashArr[i] == 2) rep = i;
            else if(hashArr[i] == 0) miss = i;
            if(miss != -1 && rep != -1) break;
        }
        return {rep, miss};
        
        //Optimal Soution: we will use maths 
        //TC: O(n), SC: O(1)
        long long n = arr.size();
        //S1-Sn = x-y, S2-S2n = 
        long long Sn = n*(n+1)/2;
        long long S2n = (n*(n+1)*(2*n+1))/6; //sum of square of n nat num.
        //we will find the S1 and S2
        long long S1=0, S2 = 0;
        for(int i=0; i<arr.size(); i++) {
            S1 += arr[i];
            S2 += (long long)arr[i] * (long long)arr[i];
        }
        long long val1 = S1-Sn;
        long long val2 = S2-S2n;
        val2 = val2/val1;
        long long x = (val1 + val2)/2;
        long long y = x - val1;
        return {(int)x, (int)y};
    }
};
