#pragma once
#include"Model.h"

class Memento
{
private:
	Model md;

public:
	Memento(Model m);
	Model getState() const;
};