class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n =  nums.size();

        // We use Moore Voting Algorithm
        // Time Complexity - O(n) - Single pass
        // Space complexity is O(1)

        // We know that only one element can be the majority element
        // Also if we the frequency of majority element - of remaining ones is always positive (>0)

        int count = 0;
        int element = 0;

        for(int i=0;i<n;i++)
        {
            if(count == 0)
            {
                element = nums[i];
                count = 1;
            }
            else 
            {
                if(nums[i] == element)
                {
                    count = count + 1;
                }
                else
                {
                    // For each different element we reduce the count
                    count = count - 1;
                }
            }
        }
        
        int majority_element = -1;

        if(count > 0)
        {
            majority_element = element;
        }

        return majority_element;
    }
};
