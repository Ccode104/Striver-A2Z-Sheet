void nTriangle(int n) {
	// Write your code here

	//Number of lines is 'n'
	for(int i=0;i<n;i++)
	{
		//The range of numbers in a row is 1 to i+1
		for(int j=0;j<=i;j++)
		{
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
}

//Reference : https://www.naukri.com/code360/problems/n-triangles_6573689?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM
