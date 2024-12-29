#include<unordered_map>
string read(int n, vector<int> book, int target)
{
    //Better approach
    //Use Hashing 
    //Search for target - book[i]
    //Time Complexity is O(n^2) - worst case for unordered map is O(n)
    //Space Complexity is O(n)

    unordered_map<int,int> index;
    int diff;
    bool pairExists = false;
    int flag=1;
    string ret_val = "NO";
    int i=0;

    while((i<n)&&(flag!=0))
    {
        diff = target - book[i];
        
        if(index.find(diff)!=index.end())
        {
            //Found the required difference in the books

            pairExists = true;
            flag = 0; //break the loop
        }
        else
        {
            //Add the pair of book[i],i in index

            index[book[i]] = i;
        }
        i = i + 1;
    }

    if(pairExists == true)
    {
        ret_val = "YES";
    }

    return ret_val;
}
