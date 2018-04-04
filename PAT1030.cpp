/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1030.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-15
*******************************************************************************/
#include "stdafx.h"
#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int N, count = 0;
	double p, array[100010];;
	cin >> N >> p;
	for (int i = 0; i<N; i++)
		cin >> array[i];
	sort(array, array + N);
	for (int i = 0; i<N; i++)
		for (int j = i + count; j<N; j++) 
		{
			if (array[j]>array[i] * p)
				break;
			if (j - i + 1>count)
				count = j - i + 1;
		}
	cout << count << endl;
	return 0;
}

//Previous Code
//#include "stdafx.h"
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	long N, p;
//	int a[100010];
//	long long perfectNum;
//	int temp = 0, maxlength = 0;;
//	memset(a, 0, sizeof(a));
//	while (cin >> N >> p)
//	{
//		for (int i = 0; i < N; i++)
//		{
//			cin >> a[i];
//		}
//		sort(a, a + N);
//		/*for (int j = 0; j < N; j++)
//		{
//			perfectNum = a[j] * p;
//			for (int k = j + maxlength; k < N; k++)
//			{
//				if (a[k] > perfectNum)
//				{
//					temp = k - j + 1;
//					break;
//				}
//				if (temp > maxlength)
//				{
//					maxlength = temp;
//				}
//			}
//			
//		}*/
//
//		cout << maxlength << endl;
//	}
//    return 0;
//}