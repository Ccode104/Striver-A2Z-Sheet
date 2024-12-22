void nNumberTriangle(int n) {
    // Write your code here.

    //Number of lines is 'n'
    for(int i=0;i<n;i++)
    {
        //Range of numbers in ith row is 1 to n-i
        for(int j=0;j<n-i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
