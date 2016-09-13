#include<iostream>
#include"UF.h"

using namespace std;

void main()
{
	UF my(10);
	my.setUnion(5, 9);
	cout.setf(std::ios::boolalpha);
	cout << my.isConnect(5, 9) << endl;
	cout << my.isConnect(2, 9) << endl;
	my.showGoup();
}