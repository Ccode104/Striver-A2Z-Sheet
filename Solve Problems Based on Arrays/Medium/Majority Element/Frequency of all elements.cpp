class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // Brute Force - calculate the frequency of each element
        // Time Complexity - O(n^2)
        // Space Complexity - O(1)
      
        int frequency = 0;

        int n = nums.size();

        int target = n/2 + 1;
        int majority_element;
        
        int i = 0;
        int j = 0;
        int found = 0;

        while((i < n) && (found != 1))
        {
            //Calculate frequency of nums[i]
            frequency = 0;
            j = 0;

            while((j < n) && (found != 1))
            {
                if(nums[i] == nums[j])
                {
                    frequency = frequency + 1;
                    if(frequency == target)
                    {
                        majority_element = nums[i];
                        found = 1;
                    }
                }
                j = j + 1;
            }
             i = i + 1;
        }

        return majority_element;
    }
};
