/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1018.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-14
*******************************************************************************/

#include "stdafx.h"
#include <iostream>

using namespace std;

char FindVictoryWay(int shitou, int jiandao, int bu)
{
	if (shitou > jiandao)
	{
		if (bu >= shitou)
		{
			return 'B';
		}
		else
		{
			return 'C';
		}
	}
	else if (shitou == jiandao)
	{
		if (shitou > bu)
		{
			return 'C';
		}
		else
		{
			return 'B';
		}
	}
	else
	{
		if (jiandao > bu)
		{
			return 'J';
		}
		else
		{
			return 'B';
		}
	}

}

int main()
{
	int N;//交锋次数
	char a_result, b_result;
	int a_victory = 0, a_ping = 0, b_victory = 0;
	int a_shitou = 0, a_jiandao = 0, a_bu = 0, b_shitou = 0, b_jiandao = 0, b_bu = 0;
	char a_winmost, b_winmost;
	while (cin >> N)
	{
		for (int i = 0; i < N; i++)
		{
			cin >> a_result >> b_result;
			if (a_result == b_result)
			{
				a_ping++;
			}
			else if (((a_result == 'C') && (b_result == 'J')) || ((a_result == 'B') && (b_result = 'C')) || ((a_result == 'J') && (b_result == 'B')))
			{
				a_victory++;
				switch (a_result)
				{
				case 'C':
					a_shitou++;
					break;
				case 'J':
					a_jiandao++;
					break;
				case 'B':
					a_bu++;
					break;
				default:
					break;
				}
			}
			else
			{
				b_victory++;
				switch (b_result)
				{
				case 'C':
					b_shitou++;
					break;
				case 'J':
					b_jiandao++;
					break;
				case 'B':
					b_bu++;
					break;
				default:
					break;
				}
			}

		}
		a_winmost = FindVictoryWay(a_shitou, a_jiandao, a_bu);
		b_winmost = FindVictoryWay(b_shitou, b_jiandao, b_bu);
		cout << a_victory << " " << a_ping << " " << b_victory << endl;
		cout << b_victory << " " << a_ping << " " << a_victory << endl;
		cout << a_winmost << " " << b_winmost << endl;
	}
    return 0;
}

