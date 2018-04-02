/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1021.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-14
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	string strN;
	int count[10] = {0,0,0,0,0,0,0,0,0,0};
	while (cin >> strN)
	{
		//计算每个个位数的个数
		for (int i = 0; i < strN.size(); i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (strN[i] - 48 == j)
				{
					count[j]++;
					break;
				}
			}
		}

		//将结果存储到map中
		map<int, int> result;
		for (int m = 0; m < 10; m++)
		{
			if (count[m] != 0)
			{
				result[m] = count[m];
			}
		}

		//输出map
		for (map<int, int>::iterator iter = result.begin(); iter != result.end(); iter++)
		{
			cout << iter->first << ":" << iter->second << endl;
		}
	}
    return 0;
}

