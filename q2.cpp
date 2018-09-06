//program for displaying hollow sqaure star pattern
//include library
#include<iostream>
using namespace std;
//write main function
int main()
{
	//loop for the entire printing	
	for(int i=0;i<5;i++)
	{
		if(i==0||i==4)
		{
			//loop for the first and last lines			
			for (int j=0;j<5;j++)
			{
				cout<<"*";
			}
		}
			
		else if(i==1||i==2||i==3)
			{
				//loop for the rest of the lines				
				cout<<"*";
				for(int k=0;k<3;k++)
				{
					cout<<" ";
				}
			
				cout<<"*";
			}
		cout<<endl;
		
	}
	return 0;
}
