// PAT1001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int GetTimes(int x, int &count)
{
	int temp = 0;
	if (x % 4 == 0)
	{
		temp = x;
		while (temp != 1)
		{
			temp = temp / 2;
			count++;
		}
		return 0;
	}
	else if (x % 2 == 0)
	{
		temp = x / 2;
		count++;
		temp = 3 * temp + 1;
		GetTimes(temp, count);
	}
	else
	{
		temp = 3 * x + 1;
		temp = temp / 2;
		count++;
		GetTimes(temp, count);
	}
	return 1;
}

int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		GetTimes(n, count);
		cout << count << endl;
	}
    return 0;
}

