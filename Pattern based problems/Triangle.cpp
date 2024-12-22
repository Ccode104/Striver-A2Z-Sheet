void triangle(int n) {
	// Write your code here

	//Number of lines is 'n'
	for(int i=0;i<n;i++)
	{
		//The number "i+1" is repeated "i+1" times in ith row
		for(int j=0;j<=i;j++)
		{
			cout<<i+1<<" ";
		}
		cout<<endl;
	}
}

//Reference : https://www.naukri.com/code360/problems/triangle_6573690?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION
