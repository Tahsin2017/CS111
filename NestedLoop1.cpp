/**
 * Takes an integer type dimension from the user
 * If the dimension is less than 5 or an even integer, it adjusts the dimension for symmetry
 * prints a figure like below
 *
 
     * * *     * * *     * * *
      ***       ***       ***
     --*--     --*--     --*--
      ***       ***       ***
     * * *     * * *     * * *
 
 */
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the dimension: ";
	int n;
	cin>>n;
	
	int x = n/10;
	int y = n%10;
	
	int c = x+y;
	
	while(c<5 || c%2==0)
	{
		c++;
	}
	
    cout<<endl;
	cout<<"The adjusted dimension is: "<<c<<endl;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=3; j++)
		{
			for(int k=1; k<=n; k++)
			{
				if(i==k || i+k == n+1 || k==(n+1)/2)
				cout<<"*";
				
				else if(i == (n+1)/2)
				cout<<"-";
				
				else
				cout<<" ";
			}
			cout<<"     ";
		}
		cout<<endl;
	}
	return 0;
}
