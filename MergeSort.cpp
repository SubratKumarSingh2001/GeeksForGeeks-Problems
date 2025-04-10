class Solution {
  public:
    void merge(vector<int>& arr, int l, int r) {
        //calculate the mid again
        int mid = l+(r-l)/2;
        
        //now we to find the length of left and right part of array
        int len1 = mid - l + 1;
        int len2 = r - mid;
        
        //now create a dynamic array to store the both the values
        int *left = new int[len1];
        int *right = new int[len2];
        
        //now copy the values in this left and right arrays
        int k = l;
        for (int i=0; i<len1; i++) {
            left[i] = arr[k];
            k++;
        }
        
        k = mid+1;
        for(int i=0; i<len2; i++) {
            right[i] = arr[k];
            k++;
        }
        
        //now we are applying merge two sorted array algorithm
        int leftIndex = 0, rightIndex = 0, mainIndex = l;
        while(leftIndex < len1 && rightIndex < len2) {
            if(left[leftIndex] < right[rightIndex]) {
                arr[mainIndex] = left[leftIndex];
                leftIndex++;
                mainIndex++;
            } 
            else {
                arr[mainIndex] = right[rightIndex];
                rightIndex++;
                mainIndex++;
            }
        }
        while(leftIndex < len1) {
            arr[mainIndex] = left[leftIndex];
            leftIndex++;
            mainIndex++;
        }
        while(rightIndex < len2) {
            arr[mainIndex] = right[rightIndex];
            rightIndex++;
            mainIndex++;
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        /*merge sort says dividing the array into two halves until single
        element is left and then merge the array after sorting
        */
        
        //if single element just return now we have to sort and merge array
        if(l == r) return;
        
        //find the mid value to divide the array into two halves
        int mid = l+(r-l)/2;
        
        //recursively divide the left part of array until single element 
        mergeSort(arr, l, mid);
        //recursively divide the right part of array until single element
        mergeSort(arr, mid+1, r);
        
        //once single element left now we have to sort and merge array
        merge(arr, l, r);
    }
};
