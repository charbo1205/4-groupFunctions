// 4 groupFunctions-A.cpp 

#include "stdafx.h"
#include<iostream>
using namespace std;

float fraction_convertor( int numer, int denom, float& decimal);

int main()
{
	int numer, denom;
	float decimal;
	cout << "Lets make some decimals" << endl;
	cout << "Go ahead and input a fraction. First the numerator please" << endl;
	cin >> numer;
	cout << "now the denominator" << endl;
	cin >> denom;
	cout << "Thank you.  You entered the fraction: " << numer << "/" << denom << endl;
	
	fraction_convertor(numer,  denom,  decimal);

	cout << decimal<<endl;
	}
	
float fraction_convertor(int numer, int denom, float& decimal)
{
	decimal = (float)numer / denom;
	return  decimal;
}
	
