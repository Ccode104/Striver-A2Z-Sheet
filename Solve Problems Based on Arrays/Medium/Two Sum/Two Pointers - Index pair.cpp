class Solution {
public:
    static bool comp(vector<int> a, vector<int> b)
    {
        return a[0] < b[0];
    }

    vector<int> twoSum(vector<int>& book, int target) {
    //Two pointer approach
    //Time complexity is O(nlogn) + O(n) = O(nlogn) - due to sort
    //Space Complexity is O(n) for the new data structure
    
    int n =  book.size();
    //Make a list of tuples for books

    vector<vector<int>> book_m;

    for(int i=0;i<n;i++)
    {
        book_m.push_back({book[i],i});
    } 
    //Sort the books
    sort(book_m.begin(),book_m.end(),comp);

    bool pairExists = false;
    vector<int> ret_val(2,0);
    int flag = 1;
    int sum;

    int left = 0;
    int right = n-1;

    while((left < right)&&(flag!=0))
    {
        sum = book_m[left][0] + book_m[right][0];
        if(sum == target)
        {
            pairExists = true;
            flag = 0;
        }
        else if(sum < target)
        {
            left = left + 1;
        }
        else{
            right = right -1;
        }
    }

    if(pairExists == true)
    {
        ret_val[0] = book_m[left][1];
        ret_val[1] = book_m[right][1];
    }

    return ret_val;
    }
};
