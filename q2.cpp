//program for displaying hollow sqaure star pattern
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
	//loop for the entire printing	
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
			if(i==0||i==a-1||j==0||j==a-1)
			{
				cout<<"*";
			}
			else
				cout<<" ";
		}
	cout<<endl;	
	}
	return 0;
}
