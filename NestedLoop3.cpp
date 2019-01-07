/**
 * using nested loop, this program takes an integer as input from the user
 * Prints a diagram as below:
 
 z**** z**** z**** z**** z****
 *z*** *z*** *z*** *z*** *z***
 **z** **z** **z** **z** **z**
 ***z* ***z* ***z* ***z* ***z*
 ****z ****z ****z ****z ****z
 
 */
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter a dimension: ";
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			for(int k=1; k<=n; k++)
			{
				if(i==k)	cout<<"z";
				else	cout<<"*";
			}
			cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
