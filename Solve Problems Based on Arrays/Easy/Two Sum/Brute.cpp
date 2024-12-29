string read(int n, vector<int> book, int target)
{
    // Write your code here.

    //Brute Force - Try all possible pairs

    //Do not repeat the same pair

    bool pairExists=false;
    string ret_val = "NO";

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(book[i]+book[j]==target)
            {
                pairExists = true ;
            }
        }
    }

    if(pairExists==true)
    {
        ret_val = "YES";
    }
    
    return ret_val;
}
