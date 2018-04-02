/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1012.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-02-01
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	int n, num;

	while (cin >> n)
	{
		getchar();
		if (n > 1000)
		{
			return -1;
		}
		int A1 = 0, A2 = 0, A3 = 0, A4 = 0, A5 = 0;
		int A22 = 0;//奇偶计数器
		int A44 = 0;//计算平均数计数器
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			getchar();
			//A1是10的倍数
			if (num % 10 == 0)
			{
				A1 += num;
			}
			//A2+num1-num2+num3...
			if (num % 5 == 1)
			{
				A22++;
				if (A22 % 2 == 1)
				{
					A2 += num;
				}
				else
				{
					A2 -= num;
				}
			}
			//A3
			if (num % 5 == 2)
			{
				A3++;
			}
			//A4
			if (num % 5 == 3)
			{
				A4 += num;
				A44++;
			}
			//A5
			if (num % 5 == 4)
			{
				if (num > A5)
				{
					A5 = num;
				}
			}

		}

		if (A1) 
		{
			cout << A1 <<" ";
		}
		else 
		{
			cout << "N ";
		}

		if (A2)
		{
			cout << A2 << " ";
		}
		else
		{
			cout << "N ";
		}

		if (A3)
		{
			cout << A3 << " ";
		}
		else
		{
			cout << "N ";
		}

		if (A44)
		{
			float a = (float)A4 / A44;
			cout.setf(ios::fixed);
			cout << fixed << setprecision(1) << a << " ";
		}
		else
		{
			cout << "N ";
		}

		if (A5)
		{
			cout << A5 << endl;
		}
		else
		{
			cout << "N" << endl;
		}
	}
    return 0;
}

