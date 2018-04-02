/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1011.cpp
Author:			Qiao Chuncheng		
Version:		v1.0
Date:           2018-01-31
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int i = 0;
	int t;
	cin >> t;
	
	//检测输入的t值，如果超过10直接返回
	if (t > 10)
	{
		return -1;
	}

	long a, b, c;
	//最初我是用For循环写的输入，发现总得WA，后来知道是要多组测试数据
	while (cin >> a >> b >> c)
	{
		if (a + b > c)
		{
			cout << "Case #" << i + 1 << ": true" << endl;
		}
		else
		{
			cout << "Case #" << i + 1 << ": false" << endl;
		}
		i = i + 1;
		if(i > t)
		{
			return 1;
		}
	}

	return 0;
}

