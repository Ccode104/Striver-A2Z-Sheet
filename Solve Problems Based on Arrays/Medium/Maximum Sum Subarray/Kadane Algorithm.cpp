class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        // Kadane Algorithm - make use of the concept -ve + number < number
        // Time Complexity - O(n) - Single Pass
        // Space Complexity - O(1)

        int maximum_sum = nums[0];
        int sum = 0;

        for(int i=0;i<n;i++)
        {
            sum = sum + nums[i];
            maximum_sum = max(sum,maximum_sum);

            if(sum < 0)
            {
                // If we include 'sum' in another subarray , it will definitey reduce total sum.
                sum = 0;
            }
        }   

        return maximum_sum;
    }
};
