class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        
        int n=arr.size();
        
        //arr[0:i] is sorted (i exclusive)
        //Insert arr[i] in arr[0:i] at correct place
        
        for(int i=0;i<n;i++)
        {
            int insert=arr[i];//Insert arr[i] in arr[0:i]
            //Traverse from arr[i] to arr[0]
            int j=i-1;
            
            while(j>=0)
            {
                //arr[j]>=insert makes it unstable sort
                if(arr[j]>insert)
                {
                    //Continue traversal after a pushing back arr[j]
                    arr[j+1]=arr[j];
                }
                else
                {
                    //Found the place
                    //No further search
                    break;
                    //No loss of arr[j+1] as its duplicate exists at arr[j+2] 
                }
                j--;
            }
            arr[j+1]=insert;
            //No loss of arr[j+1] as its duplicate exists at arr[j+2]
        }
        
    }
};
