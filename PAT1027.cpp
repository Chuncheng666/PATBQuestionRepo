/*******************************************************************************
Copyright ? 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1027.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-15
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int totalN;
	char ch;
	int n, line;
	double temp;
	int used, remain;
	while (cin >> totalN >> ch)
	{
		temp = (totalN + 1) / 2;
		n = (int)sqrt(temp);
		line = 2 * n - 1;
		//打印上三角
		for (int i = line; i > 0; i -= 2)
		{
			for (int j = 0; j < (line - i) / 2; j++)
			{
				cout << " ";
			}
			for (int j = 0; j < i; j++)
			{
				cout << ch;
			}
			cout << endl;
		}
		if (totalN != 1)
		{
			//打印下三角
			for (int i = n; i <= line; i += 2)
			{
				for (int j = 0; j < (line - i) / 2; j++)
				{
					cout << " ";
				}
				for (int j = 0; j < i; j++)
				{
					cout << ch;
				}
				cout << endl;
			}
		}
		used = 2 * n * n - 1;
		remain = totalN - used;
		cout << remain << endl;
	}
    return 0;
}

