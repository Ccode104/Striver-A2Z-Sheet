void nStarTriangle(int n) {
    // Write your code here.

    //Number of lines is 'n'

    for(int i=0;i<n;i++)
    {
        //We have max number of stars in a row as 2*n-1
        //The stars are centred at 'n-1'
        //They grow left and right by the amount n-1-i
        //Range is n-1-(n-1-i) to n-1+(n-1-i) i.e i to 2n-2-i
        for(int j=0;j<2*n-1;j++)
        {
            if((j>=i)&&(j<=2*n-2-i))
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
