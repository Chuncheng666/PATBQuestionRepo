/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1038.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-04-02
*******************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;

int a[100010];
int b[105];
int c[100010];

int main()
{
	int N,K,temp;
	memset(b, 0, sizeof(b));
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		b[temp]++;
	}
	cin >> K;
	for (int j = 0; j < K; j++)
	{
		cin >> temp;
		c[j] = b[temp];
	}

	for (int j = 0; j < K; j++)
	{
		if (j != 0)
			cout << " ";
		cout << c[j];
	}
	cout << endl;
    return 0;
}

