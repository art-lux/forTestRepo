#pragma once

#include"Model.h"
#include"Memento.h"
#include<iostream>

Model::Model() : c(0), b(0)
{}

Memento Model::getMemento() const
{
	return Memento(*this);
}

void Model::setMemento(const Memento& m)
{
	/*Model tmp =  m.getState();
	c = tmp.c;
	b = tmp.b;*/

    *this = m.getState();
}

int Model::getC() const
{
	return c;
}

int Model::getB() const
{
	return b;
}

void Model::setB(int in)
{
	b = in;
}

void Model::show() const
{
	std::cout << c << "\t" << b << std::endl;
}

void Model::setC(int in)
{
	c = in;
}