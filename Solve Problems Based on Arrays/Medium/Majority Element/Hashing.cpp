class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();

        // We use Hashing to improve time
        // Time complexity is O(n) + O(nlogn) - One pass
        // Space Complexity is O(n) - frequencies

        map<int,int> frequency;

        // Frequency[i] denotes the frequency of element 'i'
        // Initialised to '0' by default
        // For random initialisation : https://www.geeksforgeeks.org/default-values-in-a-map-in-c-stl/


        int i = 0;
        int found = 0;
        int target = n/2 + 1;
        int majority_element;

        while((i < n) && (found != 1))
        {
            // Update the frequency of nums[i]
            frequency[nums[i]] = frequency[nums[i]] + 1;

            if(frequency[nums[i]] == target)
            {
                majority_element = nums[i];
                found = 1;
            }
        } 

        return majority_element;

    }
};
