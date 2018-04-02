/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1022.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-14
*******************************************************************************/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b, d;
	while (cin >> a >> b >> d)
	{
		int sum = a + b;
		int Array[50];
		int shang, flag = 0;
		/*	样例:
			十进制转换为二进制
			除二取余法
			89(10) = 1011001(2)
			89 / 2 = 44 余 1
			44 / 2 = 22 余 0
			22 / 2 = 11 余 0
			11 / 2 = 5 余 1
			5 / 2 = 4 余 1
			4 / 2 = 2 余 0
			2 / 2 = 1		
		*/
		do
		{
			shang = sum / d;
			Array[flag] = sum % d;
			flag++;
			sum = shang;
		} while (sum != 0);
		//倒序输出
		for (int i = flag - 1; i >= 0; i--)
		{
			cout << Array[i];
		}
		cout << endl;
	}
    return 0;
}

