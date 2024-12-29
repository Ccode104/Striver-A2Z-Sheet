class Solution {
public:
    static bool comp(int a, int b)
    {
        return a < b;
    }
    void sortColors(vector<int>& nums) {

        //Brute force - Sort the array
        //Time omplexity - O(nlogn)
        //Space complexity - O(n)
        //Combination of quicksort,heapsort,insertion sort
        //https://www.geeksforgeeks.org/internal-details-of-stdsort-in-c/

        
        sort(nums.begin(),nums.end(),comp);
     
    }
};
