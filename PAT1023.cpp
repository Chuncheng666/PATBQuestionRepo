/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1023.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-14
*******************************************************************************/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a[10];
	int flag;
	//while (1)
	//{
		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];
		}
		for (int j = 1; j < 10; j++)
		{
			if (a[j] != 0)
			{
				cout << j;
				flag = j;
				break;
			}
		}

		if (a[0] != 0)
		{
			for (int m = 0; m < a[0]; m++)
			{
				cout << "0";
			}
		}

		for (int k = 1; k < 10; k++)
		{
			if (k == flag)
			{
				for (int n = 0; n < a[k] - 1; n++)
				{
					cout << k;
				}
			}
			else
			{
				for (int nn = 0; nn < a[k]; nn++)
				{
					cout << k;
				}
			}
		}
		cout << endl;
	//}
    return 0;
}

