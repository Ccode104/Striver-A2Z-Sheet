class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        
        int n=arr.size();

        //Refer : https://github.com/Ccode104/DSA-Practice/blob/master/A2Z/Solve%20Problems%20Based%20on%20Arrays/Easy/Remove%20Duplicates.cpp
        //It is similar to this problem
        
        int i=0; //Size of the array already traversed and built
        for(int j=0;j<n;j++)
        {
            if(arr[j]!=0)
            {
                arr[i]=arr[j];
                i++;
            }
        }

        for(int j=i;j<n;j++)
        {
            arr[j]=0;
        }
    }
};
