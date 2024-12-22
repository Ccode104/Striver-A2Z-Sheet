void seeding(int n) {
	// Write your code here.

	//Number of lines is 'n'
	for(int i=0;i<n;i++)
	{
		//Number of '*' in ith row is "n-i"
		for(int j=0;j<n-i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

//Reference : https://www.naukri.com/code360/problems/seeding_6581892?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
