//program for displaying a mirrored right triangular star pattern
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
		//loop for blank triangle		
		for(int j=0;j<a-1-i;j++)
		{
			cout<<" ";
			
		}	
		//loop for star triangle		
		for(int k=0;k<=i;k++)
		{
			cout<<"*";
		}
	cout<<endl;		
		
	}
	return 0;
}
