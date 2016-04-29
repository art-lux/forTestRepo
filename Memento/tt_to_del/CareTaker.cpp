#pragma once
#include"CareTaker.h"

CareTaker::CareTaker(const IOriginator& io) : memento(io.getMemento())
{
}

void CareTaker::getState(const IOriginator& io)
{
	memento = io.getMemento();
}

void CareTaker::setState(IOriginator& io)
{
	io.setMemento(memento);
}