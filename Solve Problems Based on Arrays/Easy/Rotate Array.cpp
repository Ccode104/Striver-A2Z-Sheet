class Solution {
public:
    //Reverse function
    void reverse(vector<int>& arr, int start,int end)
    {
        int temp;
        int n=(end-start+1);
        for(int i=0;i<n/2;i++)
        {
            temp=arr[start+i];
            arr[start+i]=arr[end-i];
            arr[end-i]=temp;
        }
    }
    void rotate(vector<int>& arr, int k) {

        int n=arr.size();        
        //We use the concept of reversal

        //If no need for a rotation
        if((n<=1)||(k%n==0))
            return;

        //Reverse the array
    
        reverse(arr,0,n-1);

        /*

        int temp;
        k=k%n;
        int size=n;

        for(int i=0;i<size/2;i++)
        {
            temp=arr[i];
            arr[i]=arr[size-i-1];
            arr[size-i-1]=temp;
        }
        */

        //Reverse arr[0:k-1]

        

        reverse(arr,0,k-1);

        /*

        size=k;
        for(int i=0;i<size/2;i++)
        {
            temp=arr[i];
            arr[i]=arr[size-i-1];
            arr[size-i-1]=temp;
        }
        */

        //Reverse arr[k:n-1]
       

        reverse(arr,k,n-1);

        /*

        size=n-k;

        int offset=k;
        for(int i=0;i<size/2;i++)
        {
            temp=arr[i+offset];
            arr[i+offset]=arr[n-1-(i)];
            arr[n-(i)-1]=temp;
        }
*/

    }
};
