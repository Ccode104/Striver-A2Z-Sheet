class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
     
     int n=arr.size();

     if(n==1)
        return 1;
     int i=0;
     //Let i-1 point to the last element of the solution array
     //The array arr[0:i-1] is the array with unique elements 
     //The array arr[j:n-1] is yet to be traversed
     //The array arr[i:j-1] contains the duplicates that were ignored and will be replaced by the unique elements found in arr[j:n-1]
     //Traverse the array
     for(int j=0;j<=n-2;j++)
     {
        //If adjacent elements are different
        if(arr[j]!=arr[j+1])
        {
            //Store it at the beginning of the array
            arr[i]=arr[j];
            i++;
        }
        else
        {
            //If duplicate,store the first occurence and ignore the other
            arr[i]=arr[j];
            i++;
            //Go through all the equal elements
            while((j<=n-2)&&(arr[j]==arr[j+1]))
            {
                j++;
            }
        }
     }

     //The corner case for the last element not equal to second last    element
     if(arr[n-1]!=arr[n-2])
     {
        arr[i]=arr[n-1];
        i++;
     }
     return i;   
    }
    
};
