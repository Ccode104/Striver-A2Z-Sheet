class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        
        int n=arr.size();
        
        //Bubble up n-1 elements 
        for(int i=0;i<n-1;i++)
        {
            //Bubble up the max element in subarray arr[0:n-i]
            for(int j=1;j<n-i;j++)
            {
                //Bubble up the larger element
                if(arr[j-1]>arr[j])
                {
                    int temp=arr[j-1];
                    arr[j-1]=arr[j];
                    arr[j]=temp;
                }
                else
                {
                    //No swap occurs
                }
            }
        }
    }
};

