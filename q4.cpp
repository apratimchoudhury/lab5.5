//program for displaying a mirrored right triangular star pattern
//include library
#include<iostream>
using namespace std;
//write main function
int main()
{
	//main loop	
	for(int i=0;i<5;i++)
	{
		//loop for blank triangle		
		for(int j=0;j<4-i;j++)
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
}
