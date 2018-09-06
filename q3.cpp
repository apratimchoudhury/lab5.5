//program for displaying a hollow square star pattern with diagonal
//include library
#include<iostream>
using namespace std;
//write main function
int main()
{
	//declare variables
	int a;
	//take input
	cout<<"Enter the size of pattern to be printed: ";
	cin>>a;
	//main loop	
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			if(i==1||i==a||j==1||j==a||i==j||i==a-j+1)
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
