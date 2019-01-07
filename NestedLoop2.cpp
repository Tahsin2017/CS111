/**
 * Takes input from the user and prints the following diagrams:
 
 *******
 *     *
 *     *
 *     *
 *     *
 *     *
 *******
 

 *******
    *
    *
    *
    *
    *
    *

 *     *
 *     *
 *     *
 *     *
 *     *
 *     *
 *******
 
 *********
 *   *   *
 *   *   *
 *********
 *   *   *
 *   *   *
 *********
 
 */

#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter a dimension:";
	int  n;	cin>>n;
	
	if(n%2==0)	n = n+1;
	
	cout<<"\n\n\n\n";
	
	for(int i=1; i<=n; i++)	//loop for O
	{
		cout<<"*";
		for(int j=2; j<n; j++)
		{
			if(i==1 || i==n)	cout<<"*";
			else	cout<<" ";
		}
		cout<<"*";
		
		cout<<endl;
	}
	
	cout<<"\n\n\n\n";
	
	for(int i=1; i<=n; i++)	//Loop for T
	{
		for(int j=1; j<=n; j++)
		{
			if(i==1) cout<<"*";
			
			else if(j == n/2+1)	cout<<"*";
			
			else	cout<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\n\n\n\n";
	
	for(int i=1; i<=n; i++)	//Loop for U
	{
		cout<<"*";
		
		for(int j=2; j<n; j++)
		{
			if(i==n)	cout<<"*";
			else cout<<" ";
		}	
		cout<<"*"<<endl;
	}
	
	cout<<"\n\n\n\n";
	
	for(int i=1; i<=n; i++)	//loop for chinese letter
	{
		cout<<"*";
		
		for(int j=1;j<=n; j++)
		{
			if(i==1 || i==n || i==n/2+1)	cout<<"*";
			
			else if(j == n/2+1)	cout<<"*";
			else	cout<<" ";	
		}
		cout<<"*";
		cout<<endl;
	}
	
	
	return 0;
}
