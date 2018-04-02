/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1013.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-02-27
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int prime[10005];

int is_Prime(int x)
{
	for (int k = 2; k <= sqrt(x); k++)
	{
		if (x%k == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		//检查输入值
		if (n > 10000 || m > 10000 || m > n)
		{
			return -1;
		}
		int count = 0;
		//将素数存入Prime数组
		for (int i = 2; ; i++)
		{
			if (is_Prime(i) == 1)
			{
				prime[count] = i;
				if (count >= n)
				{
					break;
				}
				count++;
			}
		}
		//输出Prime数组
		int t = 1;
		for (int j = m - 1; j < n; j++)
		{
			if (t % 10 == 0)
			{
				cout << prime[j] << '\n';
			}
			else if (j == n - 1)
			{
				cout << prime[j];
			}
			else
			{
				cout << prime[j] << ' ';
			}
			t++;
		}
	}
	return 0;
}

