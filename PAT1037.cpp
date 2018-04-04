/*******************************************************************************
Copyright © 2018-20xx Qiao Chuncheng, All Rights Reserved.
File name:		PAT1037.cpp
Author:			Qiao Chuncheng
Version:		v1.0
Date:			2018-03-28
*******************************************************************************/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int pGalleon, pSickle, pKnut;
	int aGalleon, aSickle, aKnut;
	while (scanf("%d.%d.%d %d.%d.%d", &pGalleon, &pSickle, &pKnut, &aGalleon, &aSickle, &aKnut) != EOF)
	{
		long long pTotal, aTotal, remainTotal;
		int remainGalleon, remainSickle, remainKunt;
		pTotal = pKnut + pSickle * 29 + pGalleon * 17 * 29;
		aTotal = aKnut + aSickle * 29 + aGalleon * 17 * 29;
		if (pTotal > aTotal)
		{
			remainTotal = pTotal - aTotal;
			int n = 17 * 29;
			remainGalleon = remainTotal / n;
			remainSickle = remainTotal % n / 29;
			remainKunt = remainTotal % n % 29;
			cout << "-" << remainGalleon << "." << remainSickle << "." << remainKunt << endl;
		}
		else
		{
			remainTotal = aTotal - pTotal;
			int n = 17 * 29;
			remainGalleon = remainTotal / n;
			remainSickle = remainTotal % n / 29;
			remainKunt = remainTotal % n % 29;
			cout << remainGalleon << "." << remainSickle << "." << remainKunt << endl;
		}
	}
    return 0;
}

