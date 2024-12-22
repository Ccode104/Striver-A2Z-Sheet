class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        
        int n=arr.size();
        int start=0;//pos from which to start search after initialisation
        
        if(n<2)
        {
            return -1;
        }
        
        int largest,second_largest;
        
        //Initialize the values
        if(arr[0]>arr[1])
        {
            largest=arr[0];
            second_largest=arr[1];
        }
        else if(arr[0]<arr[1])
        {
            largest=arr[1];
            second_largest=arr[0];
        }
        else
        {
            //We do not want largest and second largest to be equal
            //Search for next element not equal to largest
            
            for(int i=2;i<n;i++)
            {
                if(arr[i]!=largest)
                {
                    second_largest=arr[i];
                    start=i+1;
                    break;
                }
            }
            
            //start will not be modified unless initialistaion is done properly
            if(start==0)
            {
                //An array with all elements equal 
                return -1;
            }
            
            
            
        }
        
        for(int i=start;i<n;i++)
        {
            if(arr[i]>largest)
            {
                //Found new largest
                //largest becomes second largest
                second_largest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest)
            {
                if(arr[i]>second_largest)
                {
                    //Found new second largest
                    second_largest=arr[i];
                }
            }
        }
        
        return second_largest;
        
    }
};
