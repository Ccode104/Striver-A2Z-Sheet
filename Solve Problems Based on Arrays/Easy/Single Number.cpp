/*Time - O(n) Space - O(1)
a xor a = 0
a xor b xor a xor b = 0
The sequence does not matter.
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int n=nums.size();
     //If we look at the binary representation of each number, if we XOR two nos  bitwise, we get 0 as answer.

     //Also, a XOR b XOR a will not be 0.
     //It will become 0 if : a xor b xor a xor b

     //So the number that does not occur twice will be the number when xored with xor of all elements gives 0
    
     if(n==1)
        return nums[0];

     int xo = (int)((nums[0])^(nums[1]));

     for(int i=2;i<n;i++)
     {
        xo=(xo^nums[i]);
     }

     //XOR each element nums[i] with "xo"

     for(int i=0;i<n;i++)
     {
        if((xo^nums[i])==0)
        {
            return nums[i];
        }
     }

    return -1;
    }
};
