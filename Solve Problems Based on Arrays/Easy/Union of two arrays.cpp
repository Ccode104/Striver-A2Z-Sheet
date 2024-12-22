class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        
        int n=a.size();
        int m=b.size();
        
        //We will have one pointer for each array
        
        int i=0;
        int j=0;
        
        //Result stored in other array
        vector<int> c;
        //Now traverse the array
        
        //Below loop is similar to the "merge" operation in merge-sort
        //Remove Duplicates problem is more related to this
        while((i<n)&&(j<m))
        {
            if(a[i]==b[j])
            {
                //Duplicate
                c.push_back(a[i]);
                i++;
                j++;
                
                //Remove all next duplicate occurences
                
                while(i<n)
                {
                    if(a[i]==a[i-1])
                    {
                        i++;
                    }
                    else
                    {
                        break;
                    }
                }
                
                while(j<m)
                {
                    if(b[j]==b[j-1])
                    {
                        j++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                if(a[i]<b[j])
                {
                    //Distinct
                    //Choose smaller one since it will never be found again in b
                    
                    c.push_back(a[i]);
                    i++;
                    
                    //Remove all next duplicate occurences
                
                    while(i<n)
                    {
                        if(a[i]==a[i-1])
                        {
                            i++;
                        }
                        else
                        {
                            break;
                        }
                    }
                
                }
                else
                {
                    //Distinct
                    //Chhose smaller one since it will never be found again in a
                    
                    c.push_back(b[j]);
                    j++;
                    
                    //Remove all next duplicate occurences
            
                    while(j<m)
                    {
                        if(b[j]==b[j-1])
                        {
                            j++;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }
        
        //Copy the remaining elements in a and b into c
        
        while(i<n)
        {
            c.push_back(a[i]);
            i++;
            //Remove all next duplicate occurences
                
            while(i<n)
            {
                if(a[i]==a[i-1])
                {
                    i++;
                }
                else
                {
                    break;
                }
             }
        }
        
        while(j<m)
        {
            c.push_back(b[j]);
            j++;
            
            //Remove all next duplicate occurences
                
            while(j<m)
            {
                if(b[j]==b[j-1])
                {
                    j++;
                }
                else
                {
                    break;
                }
             }
        }
        
        return c;
    }
};
