/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1034.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-04-02
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sell, buy;
	while (cin >> sell >> buy)
	{
		int remain = 0, need = 0;

		for (size_t i = 0; i < buy.length(); i++)
		{
			for (size_t j = 0; j < sell.length(); j++)
			{
				if (buy[i] == sell[j])
				{
					buy[i] = '*';
					sell[j] = '*';
				}
			}
		}

		for (size_t i = 0; i < buy.length(); i++)
		{
			if (buy[i] != '*')
				need++;
		}

		for (size_t j = 0; j < sell.length(); j++)
		{
			if (sell[j] != '*')
				remain++;
		}

		if (need != 0)
			cout << "No " << need << endl;
		else
			cout << "Yes " << remain << endl;
	}
    return 0;
}

