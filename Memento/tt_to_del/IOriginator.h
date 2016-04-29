#pragma once

class Memento;

class IOriginator
{
public:
	virtual void setMemento(const Memento& m) = 0;
	virtual Memento getMemento() const = 0;
};