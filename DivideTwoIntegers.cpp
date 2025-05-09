class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        //code here
        /*we will find the quotient regardless of either the num is positive or negative
        at last we will check the -ve and +ve num. and return ans accordingly
        */
        //TC: O(logn), SC: O(1)
        if(dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if(divisor == 1)  return dividend;
        if(divisor == -1)  return -dividend;
        long long num = abs((long long)dividend);
        long long deno = abs((long long)divisor);
        int  start=0;
        long long end=num;
        long long mid = start + (end-start)/2;
        long long quotient=0;
        while(start <= end) {
            long long product = mid*deno;
            if(product == num) {
                quotient = mid;
                break;
            }
            else if(product > num) {
                end = mid-1;
            }
            else {
                quotient = mid;
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }

        //now we will handle the -ve dividend and divisor value to return +ve, -ve ans
        if((dividend < 0 && divisor < 0 ) || (dividend > 0 && divisor > 0)) {
            return quotient;
        }
        else {
            return -quotient;
        }
    }
};
