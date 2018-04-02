/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1020.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-14
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

struct mooncake
{
	float totalWeight;
	float totalPrice;
	double unitPrice;
};

bool mooncakeCmp(mooncake a, mooncake b) //按月饼价格降序排列
{
	return a.unitPrice > b.unitPrice;
}

using namespace std;

int main()
{
	int N, D;
	while (cin >> N >> D)
	{
		vector<mooncake> a(N);
		for (int i = 0; i < N; i++)
		{
			cin >> a[i].totalWeight;
		}
		for (int j = 0; j < N; j++)
		{
			cin >> a[j].totalPrice;
		}
		for (int k = 0; k < N; k++)
		{
			a[k].unitPrice = a[k].totalPrice / a[k].totalWeight;
		}
		sort(a.begin(), a.end(), mooncakeCmp);

		//跟据规则,先拿单位价格最高的
		float price = 0.0;
		for (int m = 0; m < N; m++)
		{
			if (a[m].totalWeight > D)
			{
				price += a[m].unitPrice * D;
				break;
			}
			else
			{
				price += a[m].totalPrice;
				D = D - a[m].totalWeight;
			}
		}

		//输出结果
		printf("%.2f", price);
	}
    return 0;
}

