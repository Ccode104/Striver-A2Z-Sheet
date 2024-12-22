void nStarTriangle(int n) {
    // Write your code here.

    //Number of lines is 'n'
    for(int i=0;i<n;i++)
    {
        //Number of stars in each row is '2*(i+1)+1' centred at n-1  (odd no is 2m+1)
        for(int j=0;j<2*(n)-1;j++)
        {
            //'*' in the range n-1-i to n-1+i
            if((j>=n-1-i)&&(j<=n-1+i))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
