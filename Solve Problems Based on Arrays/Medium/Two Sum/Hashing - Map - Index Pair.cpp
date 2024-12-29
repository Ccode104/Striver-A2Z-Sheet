class Solution {
public:
    vector<int> twoSum(vector<int>& book, int target) {
        //Better approach
    //Use Hashing 
    //Search for target - book[i]
    //Time Complexity is O(nlogn) - map has w.c O(logn)
    //Space Complexity is O(n)
    int n = book.size();

    map<int,int> index;
    int diff;
    bool pairExists = false;
    int flag=1;
    vector<int> ret_val(2,0);
    int i=0;

    while((i<n)&&(flag!=0))
    {
        diff = target - book[i];
        
        if(index.find(diff)!=index.end())
        {
            //Found the required difference in the books
            
            pairExists = true;
            ret_val[0] = i;
            ret_val[1] = index[diff];
            flag = 0; //break the loop
        }
        else
        {
            //Add the pair of book[i],i in index

            index[book[i]] = i;
        }
        i = i + 1;
    }

    if(pairExists == false)
    {
        ret_val[0] = -1;
        ret_val[1] = -1;
    }

    return ret_val;
    }
};
