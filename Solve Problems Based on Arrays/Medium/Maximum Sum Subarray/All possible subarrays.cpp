# include<limits.h>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n =  nums.size();

        // Brute force - calculate the sum of all possible subarrays
        // Time Complexity - O(n^3)
        // Space Complexity - O(1)

        int maximum_sum = INT_MIN;
        int sum = 0;// Additive identity

        for(int i=0;i<n;i++)
        {
            // Sub-array starts at index 'i'

            for(int j=0;j<n;j++)
            {
                // Sub-array ends at index 'j'

                sum = 0;
                for(int k=i;k<j+1;k++)
                {
                    // Calculate the sum of nums[i..k]
                    sum = sum + nums[k];
                    maximum_sum = max(sum,maximum_sum);
                }
            }
        }

        return maximum_sum;


    }
};
