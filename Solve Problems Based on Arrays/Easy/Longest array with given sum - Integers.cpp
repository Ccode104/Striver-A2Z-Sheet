class Solution {
  public:
  /*Time - O(n) Space - O(n) for prefix sum Hash Map*/
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        
        //We use the concept of Hashing, we store the prefix sums as we travers.
        //We look into the subarrays in arr[0:i] for 'rem'
        
        //Effectively , we check if the a subarray[i:j] has the sum == k
        //We get the longest one since we consider all i's in increasing order
        
        //This is the first 'medium' difficulty level question, we will try 
        //to use it in further question
        int n = arr.size(); // size of the array.

        map<long long, int> preSumMap;
        long long sum = 0;
        int maxLen = 0;
        for (int i = 0; i < n; i++) {
            //calculate the prefix sum till index i:
            sum += a[i];

            // if the sum = k, update the maxLen:
            if (sum == k) {
                maxLen = max(maxLen, i + 1);
            }

            // calculate the sum of remaining part i.e. x-k:
            long long rem = sum - k;

            //Calculate the length and update maxLen:
            if (preSumMap.find(rem) != preSumMap.end()) {
                
                //If there exist a subarray with sum 'k' 
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }   

            //Finally, update the map checking the conditions:
            if (preSumMap.find(sum) == preSumMap.end()) {
                //Store the index upto which the sum comes to be 'sum'
                preSumMap[sum] = i;
            }
        }

    return maxLen;
    }
