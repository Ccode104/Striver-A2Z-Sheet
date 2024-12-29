class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Dutch National Flag Algorithm 
        //3-pointers approach
        //Time Complexity - O(n) - One pass till mid and high meet
        //Space Complexity - O(1)
        //Define the intervals first to make it easy to solve

        int n = nums.size();

        int low;
        int mid;
        int high;

        // nums[0..low-1] -> 0
        // nums[low..mid-1] -> 1
        // nums[high+1..n-1] -> 2

        //nums[mid..high] -> unsorted

        low=0;
        mid=0;
        high=n-1;

        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                nums[mid] = nums[low];
                nums[low] = 0;
                low = low + 1;
                mid = mid + 1; 
            }
            else if (nums[mid] == 1)
            {
                mid = mid + 1;
            }
            else
            {
                nums[mid] = nums[high];
                nums[high] = 2;
                high = high - 1;
            }
        }
    }
};
