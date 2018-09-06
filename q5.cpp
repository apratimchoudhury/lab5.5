//program for displaying a rhombus star pattern
//include library
#include<iostream>
using namespace std;
//write main function
int main()
{
	//main loop	
	for(int i=0;i<5;i++)
	{
		//loop for first blank triangle		
		for(int j=0;j<4-i;j++)
		{
			cout<<" ";
			
		}	
		//loop for first star triangle		
		for(int k=0;k<=i;k++)
		{
			cout<<"*";
		}
		//loop for second star triangle		
		for(int l=0;l<4-i;l++)
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
