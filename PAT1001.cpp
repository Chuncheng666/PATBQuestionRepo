/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1001.cpp
Author:			Qiao Chuncheng		
Version:		v1.0
Date:           2018-04-04
*******************************************************************************/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		while (n != 1)
		{
			if (n % 2 != 0)
				n = 3 * n + 1;
			n = n / 2;
			count++;
		}
		cout << count << endl;
	}
    return 0;
}

