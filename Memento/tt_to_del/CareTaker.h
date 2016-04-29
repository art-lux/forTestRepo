#pragma once
#include"Memento.h"
class IOriginator;

class CareTaker
{
private: 
	Memento memento;

public:
    CareTaker(const IOriginator& io);

	void setState(IOriginator& io);
	void getState(const IOriginator& io);
};