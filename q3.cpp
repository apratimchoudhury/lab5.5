//program for displaying a hollow square star pattern with diagonal
//include library
#include<iostream>
using namespace std;
//write main function
int main()
{
	//main loop	
	for(int i=0;i<5;i++)
	{
		//conditional loop 1		
		if(i==0||i==4)
		{
			for(int j=0;j<5;j++)
			{
				cout<<"*";
			}
		}
		
		//conditional loop 2
		else if(i==1||i==3)
		{
			for(int k=0;k<2;k++)
			{
				cout<<"*";
			}
			cout<<" ";
			for(int p=0;p<2;p++)
			{
				cout<<"*";
			}
		}
		//conditional loop 3		
		else 
			for(int l=0;l<5;l++)
			{
				if(l==0||l==2||l==4)
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
