/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1016.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-14
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string strA, strB;
	char chA, chB;
	int sum1 = 0, sum2 = 0;
	int count1 = 0, count2 = 0;
	int num1 = 1, num2 = 1;
	while (cin >> strA >> chA >> strB >> chB)
	{
		for (int i = 0; i < strA.size(); i++)
		{
			if (strA[i] == chA)
			{
				if (count1 == 0)
				{
					sum1 += chA - 48;
					count1++;
				}
				else
				{
					num1 *= 10;
					sum1 += num1 * (chA - 48);
					count1++;
				}
			}
		}

		for (int j = 0; j < strB.size(); j++)
		{
			if (strB[j] == chB)
			{
				if (count2 == 0)
				{
					sum2 += chB - 48;
					count2++;
				}
				else
				{
					num2 *= 10;
					sum2 += num2 * (chB - 48);
					count2++;
				}
			}
		}

		cout << sum1 + sum2 << endl;
	}
    return 0;
}

