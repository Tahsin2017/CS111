/**
 * Part A: Randomly produces a 5x5 matrix using rand function and finds the sum of the largest column
 * Part B: Takes 2 words as input. shows the two words in both all Upper Case and all Lower Case
 */

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

void fill2DArray(int a[][5], int r, int c)
{
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			a[i][j] = rand()%51 - 25;   //random number from -25 to + 25
}

void print2DArray(int a[][5], int r, int c)
{
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(a[i][j] >= 0)
				cout<<" ";	
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int largestColSum(int a[][5], int r, int c)
{
	int sum =0, max;
	
	for(int i=0; i<r; i++)
		sum += a[i][0];
	
	max = sum;
	
	for(int j =1; j<c; j++)
	{
		sum = 0;
		
		for(int i=0; i<r; i++)
		{
			sum += a[i][j];	
		}
		
		if(sum > max)
			max = sum;
	}
	
	return max;
}

string toUpperCase(string word)
{
	for(int i=0; i < word.length(); i++)
	{
		int a = (int)word[i];
		
		if(a >= 97 )
		{
			word[i] = char(a-32);
		}
	}
	return word;
}

string toLowerCase(string word)
{
	for(int i=0; i < word.length(); i++)
	{
		int a = (int)word[i];
		
		if(a <= 90 )
		{
			word[i] = char(a+32);
		}
	}
	return word;
}

int main()
{
	cout << "Part A:\n";
	srand(time(0));
	int x[5][5] = {};
	fill2DArray(x, 5, 5);
	print2DArray(x, 5, 5);
	cout << "Largest column sum = " << largestColSum(x, 5, 5) << endl;
	
	cout << "Part B:\n";
	
	string word1, word2;
	
	for(int i=1; i<=3; i++)
	{
		cout << "Test Run #"<<i<<endl;
		cout << "Please enter two words: ";
		cin >> word1 >> word2;
		cout << word1 << " " << word2 << endl;
		cout << "Words in uppercase: " << toUpperCase(word1) << " " << toUpperCase(word2) << endl;
		cout << "Words in uppercase: " << toLowerCase(word1) << " " << toLowerCase(word2) << endl;
	}
	return 0;
}
