//program for displaying a diamond star pattern
//include library
#include<iostream>
using namespace std;
//write main function
int main()
{
	//loop for upper triangle	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4-i;j++)
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
	for(int i=0;i<4;i++)
	{			
		for(int m=0;m<=i;m++)
		{
			cout<< " ";
			
		}
		for(int n=0;n<3-i;n++)
		{
			cout<<"*";
		}
		for(int p=0;p<=3-i;p++)
		{
			cout<<"*";
		}
		cout<<endl;
	
	}
	return 0;
}
