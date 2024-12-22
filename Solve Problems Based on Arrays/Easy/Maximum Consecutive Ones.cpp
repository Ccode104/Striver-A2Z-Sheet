/* Time - O(n) for a single traversal 
  Space - O(1) for no extra space used

  Remember to reset the value of freq for each new set of consecutive 1s.
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        
        int n=arr.size();
        //We calculate the freq of each set of consecutive 1s as we traverse the array and will store only the max one till now

        int max_freq=0;
        int freq=0;

        for(int i=0;i<n;i++)
        {
        
            if(arr[i]==1)
            {
                freq++;
            }
            else
            {
                //Reset freq
                freq = 0;
            }

            if(max_freq<freq)
            {
                //Found a set with greater freq
                max_freq = freq;

            }

            
        }
        return max_freq;
    }
};
