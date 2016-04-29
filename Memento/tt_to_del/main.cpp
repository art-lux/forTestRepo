#include<iostream>
#include"CareTaker.h"
#include"Memento.h"
#include"Model.h"

using namespace std;

void main()
{
	Model md;
	CareTaker cr(md);
	cr.getState(md);
	md.show();
	md.setB(12);
	md.setC(10);

	md.show();
      
	cr.setState(md);
	md.show();
	getchar();
}