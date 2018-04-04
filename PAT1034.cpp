/*******************************************************************************
Copyright ? 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1034.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-15
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	int x, y, a, b;
	while (scanf("%d/%d %d/%d", &x, &y, &a, &b) != EOF)
	{
		char num1[35], num2[35];
		char sum[50], sub[35], mul[100], div[35];
		memset(div, 0, sizeof(div));
		int a1, a2, b1, b2;
		a1 = x / y;
		a2 = x%y;
		b1 = a / b;
		b2 = a%b;

		//处理第一个输入数据
		if (a2 == 0)
		{
			sprintf(num1, "%d", a1);
		}
		else
		{
			sprintf(num1, "%d %d/%d", a1, a2, y);
		}

		//处理第二个输入数据
		if (b2 == 0)
		{
			sprintf(num2, "%d", b1);
		}
		else
		{
			sprintf(num2, "%d %d/%d", b1, b2, b);
		}

		//处理和
		if (a1 == 0 && b1 == 0)
		{
			strcpy(sum, "0");
		}
		else if (a1 == 0 && b1 != 0)
		{
			strcpy(sum, num2);
		}
		else if (a1 != 0 && b1 == 0)
		{
			strcpy(sum, num1);
		}
		else
		{
			if ((a*y + b*x) % (b*y) == 0)
			{
				sprintf(sum, "%d", (a*y + b*x) / (b*y));
			}
			else
			{
				sprintf(sum, "%d %d/%d", (a*y + b*x) / (b*y), (a*y + b*x) % (b*y), b*y);
			}
		}

		//处理差
		if (a1 == 0 && b1 == 0)
		{
			strcpy(sub, "0");
		}
		else if (a1 == 0 && b1 != 0)
		{
			if (a < 0)
			{
				strcpy(sub, num2);
			}
			else
			{
				sprintf(sub, "-%s", num2);
			}
		}
		else if (a1 != 0 && b1 == 0)
		{
			strcpy(sub, num1);
		}
		else
		{
			if (b*x > a*y)
			{
				sprintf(sub, "%d %d/%d", (b*x - a*y) / (b*y), (b*x - a*y) % (b*y), b*y);
			}
			else if (b*x == a*y)
			{
				strcpy(sub, "0");
			}
			else
			{
				sprintf(sub, "-(%d %d/%d)", (a*y - b*x) / (b*y), (a*y - b*x) % (b*y), b*y);
			}
		}

		//处理积
		if (a1 == 0 || b1 == 0)
		{
			strcpy(mul, "0");
		}
		else if ((x*a) % (b*y) == 0)
		{
			sprintf(mul, "%d", (x*a) / (b*y));
		}
		else
		{
			sprintf(mul, "%d %d/%d", (x*a) / (b*y), (x*a) % (b*y), b*y);
		}

		//处理商
		if (a == 0)
		{
			strcpy(div, "Inf");
		}
		else if (a1 == 0)
		{
			strcpy(div, "0");
		}
		else if ((a*y) % (b*x) == 0)
		{
			sprintf(mul, "%d", (a*y) / (b*x));
		}
		else
		{
			sprintf(div, "%d %d/%d", (a*y) / (b*x), (a*y) % (b*x), b*x);
		}
		
		cout << num1 << " + " << num2 << " = " << sum << endl;
		cout << num1 << " - " << num2 << " = " << sub << endl;
		cout << num1 << " * " << num2 << " = " << mul << endl;
		cout << num1 << " / " << num2 << " = " << div << endl;
	}
	return 0;
}

