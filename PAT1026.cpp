/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1026.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-14
*******************************************************************************/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int t1, t2;
	int flag, seconds;
	int formatHour, formatMinute, formatSeconds;
	while (cin >> t1 >> t2)
	{
		flag = (t2 - t1) % 100 / 10;
		if (flag >= 0 && flag < 5)
		{
			seconds = (t2 - t1) / 100;
		}
		else
		{
			seconds = (t2 - t1) / 100 + 1;
		}
		formatHour = seconds / 3600;
		formatMinute = seconds % 3600 / 60;
		formatSeconds = seconds % 3600 % 60;
		printf("%02d:%02d:%02d\n", formatHour, formatMinute, formatSeconds);
	}
    return 0;
}

