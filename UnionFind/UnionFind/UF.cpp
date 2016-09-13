#include<iostream>
#include"UF.h"

UF::UF(int x) : SIZE(x), m_uf(new int[SIZE])
{
	for (int i = 0; i < SIZE; ++i)
	{
		m_uf[i] = i;
	}
}

UF::UF(const UF& uf) : SIZE(uf.SIZE), m_uf(new int[SIZE])
{
	initialize(uf);
}

UF& UF::operator=(const UF& uf)
{
	if (this != &uf)
	{
		dispose();
		SIZE = uf.SIZE;
		m_uf = new int[SIZE];
		initialize(uf);
	}
	return *this;
}

UF::~UF()
{
	dispose();
}

void UF::dispose()
{
	delete[] m_uf;
}

void UF::initialize(const UF& uf)
{
	for (int i = 0; i < SIZE; ++i)
	{
		m_uf[i] = uf.m_uf[i];
	}
}

bool UF::isConnect(const int x, const int y) const
{
	return m_uf[x] == m_uf[y];
}

void UF::setUnion(const int x, const int y)
{
	if (m_uf[x] != m_uf[y])
	{
		int tmp = m_uf[x];
		for (int i = 0; i < SIZE; ++i)
		{
			if (m_uf[i] == tmp)
			{
				m_uf[i] = m_uf[y];
			}
		}
	}
	
}

void UF::showGoup() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			if (m_uf[j] == i)
			{
				std::cout << j << " : " << i << " | ";
			}
		}
		std::cout << std::endl;
	}
}

