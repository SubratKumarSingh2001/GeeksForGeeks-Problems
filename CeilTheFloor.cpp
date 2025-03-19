class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        //for floor value
        int floor = -1, ceil = -1;
        int s = 0, e = arr.size()-1;
        int m = s + (e-s)/2;
        while(s <= e) {
            if(arr[m] == x) {
                floor = arr[m];
                break;
            }
            else if(arr[m] > x) e = m-1;
            else {
                floor = arr[m];
                s = m+1;
            }
            m = s + (e-s)/2;
        }
        
        //for ceil value
        s = 0, e= arr.size()-1;
        m = s + (e-s)/2;
        while(s <= e) {
            if(arr[m] == x) {
                ceil = arr[m];
                break;
            }
            else if(arr[m] > x) {
                ceil = arr[m];
                e = m-1;
            }
            else s = m+1;
            m = s + (e-s)/2;
        }
        
        return {floor, ceil};
    }
};
