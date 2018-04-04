/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1033.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-16
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	char brokenS[100010];
	char inputS[100010];
	int flag[130];
	memset(flag, 0, sizeof(flag));
	gets_s(brokenS, 100010);
	gets_s(inputS, 100010);

	for (int i = 0; i < strlen(brokenS); i++)
	{
		flag[(int)brokenS[i]] = 1;
		if (brokenS[i] >= 'A' && brokenS[i] <= 'Z')
		{
			flag[(int)brokenS[i] - 'A' + 'a'] = 1;
		}
	}
	if (flag['+'] == 1)
	{
		for (int j = 'A'; j <= 'Z'; j++)
		{
			flag[j] = 1;
		}
	}

	for (int k = 0; k < strlen(inputS); k++)
	{
		if (flag[(int)inputS[k]] == 0)
		{
			cout << inputS[k];
		}
	}

	cout << endl;
    return 0;
}

