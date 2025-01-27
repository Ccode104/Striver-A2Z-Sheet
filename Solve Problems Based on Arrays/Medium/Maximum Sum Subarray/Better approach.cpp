# include<limits.h>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n =  nums.size();

        // Better with optimisation - calculate the sum of all possible subarrays
        // Time Complexity - O(n^2)
        // Space Complexity - O(1)

        int maximum_sum = INT_MIN;
        int sum = 0;// Additive identity

        for(int i=0;i<n;i++)
        {
            // Sub-array starts at index 'i'
            
            sum = 0;

            for(int j=i;j<n;j++)
            {
                // Sub-array ends at index 'j'

                /*
                sum = 0;
                for(int k=i;k<j+1;k++)
                {
                    // Calculate the sum of nums[i..k]
                    sum = sum + nums[k];
                }*/

                // We do not use above loop. Instead we reuse sum of nums[i..j-1] to get nums[i..j]  

                sum = sum + nums[j];
                maximum_sum = max(sum,maximum_sum);
            }
        }

        return maximum_sum;


    }
};
