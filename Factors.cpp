/**
 * Takes a 2 digit number from the user
 * If the number is not a 2 digit one, it keeps asking the user for a 2 digit number
 * Finds the factor of that number
 * Counts the total number of factors it has.
 * Shows the factors and total count of factors 
 */

#include<iostream>
using namespace std;

int main()
{
	int n;
	int count = 0;
	
	cout<<"Enter a 2 digit number: ";
	cin>>n;
	
	while(n<10 || n>99)
	{
		cout<<"Enter a 2 digit number: ";
		cin>>n;
	}
	
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			cout<<i<<endl;
			count++;
		}
	}
	
	cout<<n<<" has "<<count<<" factors"<<endl;
	
	return 0;
}
