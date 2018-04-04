/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1032.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-16
*******************************************************************************/
#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int N, schoolId, studentScore, maxSum = 0, maxId;
	int a[100010];
	memset(a, 0, sizeof(int)*100010);
	while (cin >> N)
	{
		for (int i = 0; i < N; i++)
		{
			cin >> schoolId >> studentScore;
			a[schoolId] += studentScore;
			if (a[schoolId] > maxSum)
			{
				maxId = schoolId;
				maxSum = a[schoolId];
			}
		}
		cout << maxId << " " << maxSum << endl;
	}
    return 0;
}

