// PAT1002.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	char data[12][6] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	while (cin >> s)
	{
		int sum = 0;
		int sumBai, sumShi, sumGe;
		for (size_t i = 0; i < s.size(); i++)
		{
			sum += s[i] - 48;
		}
		sumBai = sum / 100;
		sumShi = sum % 100 / 10;
		sumGe = sum % 10;

		//cout << data[sumBai] << " " << data[sumShi] << " " << data[sumGe] << endl;

		if (sumBai == 0 && sumShi == 0)
			cout << data[sumGe] << endl;
		else if (sumBai == 0 && sumShi != 0)
			cout << data[sumShi] << " " << data[sumGe] << endl;
		else
			cout << data[sumBai] << " " << data[sumShi] << " " << data[sumGe] << endl;
	}
    return 0;
}

