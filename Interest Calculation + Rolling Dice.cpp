/**
 * Part A:Prints a table which shows amount of money needed to be deposited to get $1 after certain certain period of time at a certain interest rate
 
 *  Part B: Calculates the amount of money needed to be deposited today to get a certain amount after a certain period of time
 
 * Part C: Keeps rolling 3 dices until the sum of the numbers of the dices is less than 7
 */

#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cstring>
using namespace std;

double presentVal(double fVal, double iR, int year)
{
	double pVal;
	
	pVal = fVal/(1+iR);
	
	if(year > 1)
		for(int i=2; i<=year; i++)
			pVal *= 1/(1+iR);
	
	return pVal;
}

bool smallerThan7(int a)
{
	if(a<7)	
		return true;
	else
		return false;
}

int rollDice()
{
	int a = rand()%6 + 1;
	return a; 
}

void emphasis(string s)
{
	int a = rollDice();
	int b = rollDice();
	int c = rollDice();
	int sum = a+b+c;
	
	cout<<"Roll dice: "<<a<<" "<<b<<" "<<c<<" Sum = "<< sum<<endl;
	
	if(smallerThan7(sum))
	{
		for(int i=0; i<3; i++)
			cout<<s;
			
		exit(1);
	} 
}

int main()
{
	cout<<"Part A:\n";
	cout<<"Present value of $1\n\n";
	
	cout<<"Periods\t";
	
	for(int i=1; i<=10; i++)
		cout<< i <<"%\t";
	
	cout<<endl;
	
	for(int i=1; i<=10; i++)
	{
		cout<<i<<"\t";
		for(double j=1; j<=10; j++)
		{
			cout<<setprecision(4)<<presentVal(1.0, j/100, i)<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"Part B:\n";
	
	cout<<"Enter the amount that you want to save: $";
	double amount;	cin>>amount;
	
	cout<<"Enter the annual interest rate(in decimal form such as .042): ";
	double interest;	cin>>interest;
	
	cout<<"Enter the number of years that you plan to keep the money in the account: ";
	int year; 	cin>>year;
	
	cout<<"The amount you need to deposit today is $"<<setprecision(5)<<presentVal(amount, interest, year);
	cout<<endl;
	
	cout<<"\nPart C:\n";
	while(1)	
		emphasis("Alright! I'm Done! ");
	return 0;
}
