class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // Your code goes here
        //Optimal Solution, Need more Revision, Binary Search
        //TC: O(log(min(n1,n2))), SC: O(1);
        int n1 = a.size();
        int n2 = b.size();
        //we will apply binary search on smaller array
        if(n1 > n2)  return medianOf2(b, a);

        int n = n1 + n2;
        int leftEle = (n1 + n2 + 1)/2; //how many elements should be in left portion
        int start = 0, end = n1;// as we can take 0 element or till size of n1 element
        int mid1 = start + (end-start)/2;
        int mid2 = leftEle - mid1;
        while(start <= end) {
            //Assigning the values of l1, l2, r1 and r2
            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;

            if(mid1-1 >= 0) l1 = a[mid1-1]; //check not accessing invalid index
            if(mid2-1 >= 0) l2 = b[mid2-1];
            if(mid1 < n1) r1 = a[mid1];
            if(mid2 < n2)  r2 = b[mid2];

            //when we have got our desired l1 l2, r1, r2 we will find median if n even/odd
            if(l1 <= r2 && l2 <= r1) {
                if(n%2 == 0) {
                    return (double)(max(l1, l2) + min(r1, r2))/2.0; 
                }
                else {
                    return (double)max(l1, l2);
                }
            }

            //if uppr doesnt fulfill we will eliminate the left or right half of small arr
            if(l1 < r2) {
                start = mid1+1;
            }
            else {
                end = mid1-1;
            }
            mid1 = start + (end-start)/2;
            mid2 = leftEle - mid1;
        }
        return 0;
    }
};
