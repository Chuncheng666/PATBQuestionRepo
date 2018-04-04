/*******************************************************************************
Copyright ? 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1031.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-16
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int N;
	string personId;
	string preId;
	int count = 0;
	char ch;
	int quan[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char z[11] = { '1','0','X','9','8','7','6','5','4','3','2' };//字符数组应该是'6',不是6
	vector<string> wrongIds;
	
	while(cin >> N)
	{
		for (int i = 0; i < N; i++)
		{
			cin >> personId;
			int sum = 0;//sum要清0
			bool flag = false;
			preId = personId.substr(0, 17);
			for (int j = 0; j < 17; j++)
			{
				if (preId[j] >= '0' && preId[j] <= '9')//等号不能少
				{
					ch = preId[j] - 48;
					sum += ch*quan[j];
				}
				else
				{
					flag = true;
					break;
				}
			}

			sum = sum % 11;

			if (flag == true || z[sum] != personId[17])
			{
				wrongIds.push_back(personId);//输入完成再输出,先保存到vector中
				count++;
			}
		}

		if (count == 0)
		{
			cout << "All passed" << endl;
		}
		else
		{
			for (vector<string>::iterator iter = wrongIds.begin(); iter != wrongIds.end(); iter++)
			{
				//vector<string> 输出用*iter
				cout << *iter << endl;
			}
		}
			
	}
    return 0;
}

