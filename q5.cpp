//program for displaying a rhombus star pattern
//include library
#include<iostream>
using namespace std;
//write main function
int main()
{
	//declare variables
	int a;
	//take input
	cout<<"Enter the size of the pattern to be printed: ";
	cin>>a;
	//main loop	
	for(int i=0;i<a;i++)
	{
		//loop for first blank triangle		
		for(int j=0;j<a-1-i;j++)
		{
			cout<<" ";
			
		}	
		//loop for first star triangle		
		for(int k=0;k<=i;k++)
		{
			cout<<"*";
		}
		//loop for second star triangle		
		for(int l=0;l<a-1-i;l++)
		{
			cout<<"*";
		}
		//loop for second blank triangle		
		for(int m=0;m<=i;m++)
		{
			cout<<" ";
		}
	cout<<endl;		
		
	}
	return 0;
}
