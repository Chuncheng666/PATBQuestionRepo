/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1036.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-28
*******************************************************************************/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int N;
	char c;
	while (cin >> N >> c)
	{
		int y = N / 2 + N % 2;
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i == 0 || i == y - 1)
				{
					cout << c;
				}
				else
				{
					if (j == 0 || j == N - 1)
					{
						cout << c;
					}
					else
					{
						cout << " ";
					}
				}
			}
			cout << endl;
		}
	}
    return 0;
}

