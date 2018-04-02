/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1015.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-01
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Student {
	int id;
	int de;
	int cai;
};

bool outputCmp(Student stuA, Student stuB)
{
	//德才总分是否一样
	if ((stuA.de + stuA.cai) != (stuB.de + stuB.cai))
	{
		return stuA.de + stuA.cai > stuB.de + stuB.cai;
	}
	else
	{
		//德分优先
		if (stuA.de != stuB.de)
		{
			return stuA.de > stuB.de;
		}
		else
		{
			//比较学号
			return stuA.id > stuB.id;
		}
	}
}

int main()
{
	int count = 0;
	vector<Student> v1, v2, v3, v4;
	Student stu;
	int N, L, H;
	while(cin >> N >> L >> H)
	//while (scanf("%d %d %d", &N, &L, &H) != EOF)
	{
		//输入学生id,德,才,并整理放入vector.
		for (int i = 0; i < N; i++)
		{
			//scanf("%s %d %d", &stu.id, &stu.de, &stu.cai);
			cin >> stu.id >> stu.de >> stu.cai;
			if (stu.de >= L && stu.cai >= L)
			{
				count++;
				if (stu.de >= H && stu.cai >= H)
				{
					v1.push_back(stu);
				}
				else if (stu.de >= H && stu.cai < H)
				{
					v2.push_back(stu);
				}
				else if (stu.de < H && stu.cai < H && stu.de > stu.cai)
				{
					v3.push_back(stu);
				}
				else
				{
					v4.push_back(stu);
				}
			}
		}

		//对v1,v2,v3,v4进行排序
		sort(v1.begin(), v1.end(), outputCmp);
		sort(v2.begin(), v2.end(), outputCmp);
		sort(v3.begin(), v3.end(), outputCmp);
		sort(v4.begin(), v4.end(), outputCmp);

		//输出
		cout << count << '\n';
		//printf("%d\n", count);
		for (vector<Student>::iterator iter = v1.begin(); iter != v1.end(); iter++)
		{
			//printf("%s %d %d", iter->id, iter->de, iter->cai);
			cout << iter->id << ' ' << iter->de << ' ' << iter->cai << '\n';
		}
		vector<Student>().swap(v1);
		for (vector<Student>::iterator iter = v2.begin(); iter != v2.end(); iter++)
		{
			//printf("%s %d %d", iter->id, iter->de, iter->cai);
			cout << iter->id << ' ' << iter->de << ' ' << iter->cai << '\n';
		}
		vector<Student>().swap(v2);
		for (vector<Student>::iterator iter = v3.begin(); iter != v3.end(); iter++)
		{
			//printf("%s %d %d", iter->id, iter->de, iter->cai);
			cout << iter->id << ' ' << iter->de << ' ' << iter->cai << '\n';
		}
		vector<Student>().swap(v3);
		for (vector<Student>::iterator iter = v4.begin(); iter != v4.end(); iter++)
		{
			//printf("%s %d %d", iter->id, iter->de, iter->cai);
			cout << iter->id << ' ' << iter->de << ' ' << iter->cai << '\n';
		}
		vector<Student>().swap(v4);
	}
    return 0;
}

