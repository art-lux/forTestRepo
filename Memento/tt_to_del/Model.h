#pragma once
#include"IOriginator.h"

class Memento;

class Model : public IOriginator
{
private:
	int c;
	int b;
public:
	Model();
	virtual void setMemento(const Memento& m);
	virtual Memento getMemento() const;

#pragma region GET_SET
	int getC() const;
	int getB() const;
	void setC(int in);
	void setB(int in);
#pragma endregion

	void show() const;
};