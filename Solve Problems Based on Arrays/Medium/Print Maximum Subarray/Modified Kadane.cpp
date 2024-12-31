#include <bits/stdc++.h> 
vector<int> maximumsumSubarray(vector<int> &arr , int n)
{
    //Write your code here

    int maximum_sum = arr[0]; // Empty Subarray
    int sum = 0; // Additive Identity

    // The subarray with maximum sum
    int start = 0;
    int end = 0;
    int res_start = 0;
    int res_end = 0; 

    
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];

        if(maximum_sum == sum)
        {
            // Two subarrays with same sum
            end = i;
            
            // Compare the lengths
            if (end - start >= res_end - res_start) {
              res_start = start;
              res_end = end;
            }
        }
        else if(maximum_sum < sum)
        {
            maximum_sum = sum;
            end = i;
            res_start = start;
            res_end = end;
        }

        if(sum < 0)
        {
            sum = 0;
            start = i + 1;
            end = i + 1;
            // No need to consider the subarray with sum -ve since it will decrease overall sum
        }

        
    }

    // Print the subarray with maximum sum

    vector<int> result;
    for(int i=res_start;i<=res_end;i++)
    {
        result.push_back(arr[i]);
    }
    
    return result;
}
