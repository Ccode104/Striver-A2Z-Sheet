class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int> arr, int k) {

        // Your code here
        int n=arr.size();
      
        //We use Linear Search  
        int i=0;
        
        while(i<n)
        {
            if(arr[i]==k)
            {
                //Found the key
                return true;
            }
        }
        
        //Failure in search
        return false;
        
    }
};
