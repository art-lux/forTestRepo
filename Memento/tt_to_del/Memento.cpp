#pragma once
#include"Memento.h"

Memento::Memento(Model m)
{
	md = m;
}

Model Memento::getState() const
{
	return md;
}