//program for displaying a diamond star pattern
//include library
#include<iostream>
using namespace std;
//write main function
int main()
{
	//take input
	int a;
	cout<<"Enter the size of the pattern to be printed: ";
	cin>>a;
	//loop for upper triangle	
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a-1-i;j++)
		{
			cout<<" ";
			
		}
		for(int k=0;k<=i;k++)
		{
			cout<<"*";
		}
		for(int l=0;l<i;l++)
		{
			cout<<"*";
		}		
		
		cout<<endl;
	}
	//loop for lower triangle	
	for(int i=0;i<a;i++)
	{			
		for(int m=0;m<=i;m++)
		{
			cout<< " ";
			
		}
		for(int n=0;n<a-2-i;n++)
		{
			cout<<"*";
		}
		for(int p=0;p<=a-2-i;p++)
		{
			cout<<"*";
		}
		cout<<endl;
	
	}
	return 0;
}


