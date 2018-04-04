/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1029.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-15
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	int flag[130];
	/*for (int m = 0; m < 130; m++)
	{
		flag[m] = 0;
	}*/
	memset(flag, 0, sizeof(flag));
	string inputS, realS;
	while (cin >> inputS >> realS)
	{
		transform(inputS.begin(), inputS.end(), inputS.begin(), ::toupper);
		transform(realS.begin(), realS.end(), realS.begin(), ::toupper);
		for (int i = 0; i < realS.size(); i++)
		{
			flag[(int)realS[i]] = 1;
		}

		for (int j = 0; j < inputS.size(); j++)
		{
			if (flag[(int)inputS[j]] == 0)
			{
				cout << inputS[j];
				flag[(int)inputS[j]] = 1;
			}
		}
		cout << endl;
	}
    return 0;
}

