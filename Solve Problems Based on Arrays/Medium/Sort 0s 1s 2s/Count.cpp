class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Similar to Counting sort
        //Time complexity - O(n)
        //Multiple pass
        //Space Complexity - O(1)
        
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                count0 = count0 + 1;
            }
            else if(nums[i] == 1)
            {
                count1 = count1 + 1;
            }
            else
            {
                count2 = count2 + 1;
            }
        }

        for(int i = 0; i < count0; i++)
        {
            nums[i] = 0;
        }
        for(int i = count0; i < count0 + count1; i++)
        {
            nums[i] = 1;
        }
        for(int i = count0 + count1; i < count0 + count1 + count2; i++)
        {
            nums[i] = 2;
        }
    }
};
