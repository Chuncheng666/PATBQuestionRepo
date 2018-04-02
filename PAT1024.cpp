/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1024.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-14
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int stringToInt(const string &s)
{
	stringstream ss;
	int result;
	ss << s;
	ss >> result;
	return result;
}

int main()
{
	string str, num;
	int exp;
	while (cin >> str)
	{
		//Sample:+1.23400E-03
		char sign = str[0];					//符号位是 + 还是 -
		int eLocate = str.find('E');		//找到E的位置
		num = str[1];						//整数位
		num += str.substr(3, eLocate - 3);	//获取数字,substr是从3位置开始,复制eLocate-3个字节
		exp = stringToInt(str.substr(eLocate + 1));

		//输出符号位
		if (sign == '-')
		{
			cout << "-";
		}

		//根据exp格式化输出
		if (exp < 0)//小数点往前移动,前面加0
		{
			cout << "0.";
			for (int i = 0; i < -exp - 1; i++)
			{
				cout << "0";
			}
			cout << num;
		}
		else if (exp > num.length() -1)//后面补0
		{
			cout << num;
			for (int i = 0; i < exp - num.length() + 1; i++)
			{
				cout << "0";
			}
		}
		else//小数点在中间
		{
			cout << num.substr(0, exp + 1);
			cout << ".";
			cout << num.substr(exp + 1);
		}
	}
    return 0;
}

