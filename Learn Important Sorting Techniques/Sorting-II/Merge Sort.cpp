class Solution {
  public:
    
    void merge(vector<int>& arr,int l,int m, int r)
    {
        vector<int> temp(r-l+1,0); //will store the merged array
        
        int k1=l; //for 1st half 
        int k2=m+1; //for 2nd half
        int k=0; //for merged array temp
        
        while(k<r-l+1)
        {
            //Out of bounds check
            if((k1>m)||(k2>r))
            {
                break;
            }
            
            //Pick the smaller one and store it in temp
            if(arr[k1]<arr[k2])
            {
                temp[k]=arr[k1];
                k++;
                k1++;
            }
            else
            {
                temp[k]=arr[k2];
                k++;
                k2++;
            }
        }
        //For remaining elements in one of the halves(or none)
        
        while(k1<=m)
        {
            temp[k]=arr[k1];
            k++;
            k1++;
        }
        
        while(k2<=r)
        {
            temp[k]=arr[k2];
            k++;
            k2++;
        }
        
        //Finally, copy temp to original subarray
        
        for(k=0;k<r-l+1;k++)
        {
            arr[k+l]=temp[k];
        }
        
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        //sorts the array arr[l:r]
        if(l<r)
        {
            int mid=(l+r)/2;
            //Sort 1st half
            mergeSort(arr,l,mid);
            //Sort 2nd half
            mergeSort(arr,mid+1,r);
            //Merge both halves
            merge(arr,l,mid,r);
            
        }
    }
};
