/**
 * Part A: i. Recursively counts the even digits in a number
           ii. Recursively removes the even digits
           iii. Finds out if there exits even digit in the number
 
 * Part B: i. Calculates the range(max - min) of an array
           ii. Recursively reverses an array
 */
#include<iostream>
using namespace std;

int countEven(int a)
{	
	if(a/10 == 0)
	{
		if((a%10) % 2 ==0)
			return 1;
		else
			return 0;
	}
	if((a%10) % 2 == 0)
		return 1 + countEven(a/10);
	else
		return 0 + countEven(a/10);
}

int removeEven(int a)
{
	if(a/10 == 0)	
		return a;
		
	if((a%10)%2 == 0)
		return removeEven(a/10);
	else
		return (removeEven(a/10)*10 + (a%10));
}

bool hasEven(int a)
{
	if(a%2 == 0)	
		return true;
		
	else if(a/10 == 0)	
		return false;	
	
	else
		return hasEven(a/10);	
}

void printStarDigit(int a)
{	
	if(a/10 == 0)
	{
		cout<<"*"<<a%10<<"*";
		return;
	}
	printStarDigit(a/10);
	cout<<a%10;
	cout<<"*";
}

int range(int a[], int s)
{
	int max = a[0] , min = a[0];
	
	for(int i=0; i<s; i++)
	{
		if(a[i] < min)	
			min = a[i];
		
		if(a[i] > max)
			max = a[i];
	}
	
	return max-min;
}

void swap(int &p, int &q)
{
	int temp = p;
	p = q;
	q = temp;
}

void reverse(int a[], int s)
{	
	for(int i=0; i<(s/2); i++)
	{
		swap(a[i], a[s-i-1]);
	}
}

int main()
{
	cout << "Part A:\n";
 	
	int arr[3] = { 5050155, 5, 707070 };
 	
	for (int i = 0; i < 3; i++)
	{
 		cout << "countEven(" << arr[i] << ") = " << countEven(arr[i]) << endl;
 		cout << "removeEven(" << arr[i] << ") = " << removeEven(arr[i]) << endl;
 		cout << "hasEven(" << arr[i] << ") = ";
		if (hasEven(arr[i])) cout << "Yes" << endl;
 		else cout << "No" << endl;
	 	printStarDigit(arr[i]);
 		cout << endl << endl;
	}
 	
	cout << "Part B:\n";
 	
	int a[4] = { 7, 2, 8, 3 };
 	int b[5] = { 3, 4, 5, 6, 7 };
 	cout << "The range of array a is " << range(a, 4) << endl;
 	cout << "The range of array b is " << range(b, 5) << endl;
 	reverse(a, 4);
 	reverse(b, 5);
	
 	cout << "Array a reversed: ";
 	
	for (int i = 0; i < 4; ++i)
 	cout << a[i] << " ";
 	
	cout << endl;
 	cout << "Array b reversed: ";
 	
	for (int i = 0; i < 5; ++i)
 	cout << b[i] << " ";
 	
	cout << endl;
 	
	return 0;
}
