/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1019.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-14
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

int big, small;
int GetNumbers(int x)
{
	int a[4];
	a[0] = x / 1000;
	a[1] = x / 100 % 10;
	a[2] = x / 10 % 10;
	a[3] = x % 10;
	sort(a, a + 4);
	big = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
	small = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
	return 0;
}
int main()
{
	int number, result;
	while (cin >> number)
	{
		GetNumbers(number);
		if (big == small)
		{
			printf("%04d - %04d = 0000\n", big, small);
			//cout << big << " - " << small << " = 0000" << endl;
		}
		else
		{
			do
			{
				result = big - small;
				printf("%04d - %04d = %04d\n", big, small, result);
				//cout << big << " - " << small << " = " << result << endl;
				GetNumbers(result);
			} while (result != 6174);
		}
	}
    return 0;
}

