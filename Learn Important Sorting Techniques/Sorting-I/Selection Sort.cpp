class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n=arr.size();
        int min=arr[0];
        int index;//location of min
        
        //Select the minimum element from the array 'n-1' times and bring it at the correct place
        for(int i=0;i<n-1;i++)
        {
            //Find the minimum element in subarray arr[i:]
            min=arr[i];
            index=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<min)
                {
                    min=arr[j];
                    index=j;
                }
            }
            //Swap arr[i] and arr[j] i.e place the min at front of subarray
            int temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
        }
        
    }
};
