class Solution {
public:
    bool check(vector<int>& arr) {

        int n=arr.size();
        int start=-1;
        //arr[i+1]>=arr[i] for all i in 0 to n-1
        //arr[i+1]<arr[i] will denote the boundary
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]<arr[i])
            {
                start=i+1;
            }
        }
        //Above works only if the array is not having all equal terms
        if(start!=-1)
        {
            //arr[start] to arr[n-1] 
            for(int i=start;i<n-1;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    //Not sorted
                    return false;
                }
            }
            if(arr[n-1]>arr[0])
            {
                //Continuity broken
                return false;
            }
            //arr[0] to arr[start-1]
            for(int i=0;i<start-1;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    //Not sorted
                    return false;
                }
            }

            //Sorted array checked
            return true;
        }
        else
        {
            //Array with all elements equal 
            return true;
        }
    }
};
