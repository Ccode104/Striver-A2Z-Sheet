class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        
        //sort arr[low:high]
        if(low<high)
        {
            //find the pivot point
            int p=partition(arr,low,high);
            
            //sort arr[low:p-1]
            quickSort(arr,low,p-1);
            
            //sort arr[p+1:high]
            quickSort(arr,p+1,high);
        }
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        // code here
        
        //Choose the last element as pivot(can choose any!) 
        int pivot=arr[high];
        
        int i=low-1; //last element smaller than pivot from left
        
        //Traverse the array from low to high, swapping each element smaller
        // than pivot with arr[i+1], updating i to i+1
        //arr[i+1] is now the last elment rom left smaller than pivot
        
        //j<=high not used since arr[high] is the pivot
        for(int j=low;j<high;j++)
        {
            if(arr[j]<pivot)
            {
                i+=1;
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            else
            {
                //Continue
            }
        }
        //Now put the pivot at i+1 th place since arr[low:i+1] is the subarray 
        //with all elements smaller than pivot
        
        int temp=arr[i+1];
        arr[i+1]=pivot;// pivot and arr[high] are equal!
        arr[high]=temp;
        
        return i+1;
    }
};
