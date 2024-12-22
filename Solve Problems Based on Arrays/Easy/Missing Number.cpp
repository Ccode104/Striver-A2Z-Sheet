class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n=nums.size();
        //We make use of maths
        //Calculate the sum of all elements in the array

        int sum=0;//Additive Identity

        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }

        //If all nos in range [0,n] are present , maxsum is (n*(n+1))/2
        //But we can store only n elemnts not n+1 elements.
        //Hence, there must be 1 missing element.

        //Say k is missing. Then sum = maxsum - k
        //Missing element is k = maxsum - sum

        int maxsum = (n*(n+1))/2;
        return (maxsum - sum);
    }
