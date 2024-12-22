void nStarDiamond(int n) {
    // Write your code here.

    //Number of lines is '2n'
    for(int i=0;i<2*n;i++)
    {
        //Centre in a row at 'n-1'
        //Range is 'n-1-i'to 'n-1+i'
        //This range changes from row 'n'
        //New range is 'i' to '2n-2-i'

        for(int j=0;j<2*n-1;j++)
        {
            if(i<=n)
            {
                if((j>=n-1-i)&&(j<=n-1+i))
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                // Change i to i-n
                if((j>=i-n)&&(j<=2*n-2-(i-n)))
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}
