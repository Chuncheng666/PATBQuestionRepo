/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1017.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-14
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, q;
	int b, r;
	while (cin >> a >> b)
	{
		int num = a[0] - 48;
		if (num >= b)
		{
			q.push_back(num / b + 48);
		}
		for (int i = 1; i < a.size(); i++)
		{
			r = num%b;
			num = r * 10 + a[i] - 48;
			q.push_back(num / b + 48);
		}
		r = num%b;
		if (a.size() == 1 && a[0] - 48 < b)
		{
			cout << "0 " << a[0] - 48 << endl;
		}
		else
		{
			cout << q << " " << r << endl;
		}
	}
    return 0;
}

