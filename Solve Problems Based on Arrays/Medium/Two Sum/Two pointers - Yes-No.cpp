bool comp(int a, int b)
{
    return a < b;
}
string read(int n, vector<int> book, int target)
{
    //Two pointer approach
    //Time complexity is O(nlogn) + O(n) = O(nlogn) - due to sort
    //Space Complexity is O(1)
    
    //Sort the books
    sort(book.begin(),book.end(),comp);

    bool pairExists = false;
    string ret_val = "NO";
    int flag = 1;
    int sum;

    int left = 0;
    int right = n-1;

    while((left < right)&&(flag!=0))
    {
        sum = book[left] + book[right];
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
        ret_val = "YES";
    }

    return ret_val;
}
