#pragma once

class UF
{
public:

	UF(int x);
	UF(const UF& uf);
	UF& operator=(const UF& uf);
	~UF();

	bool isConnect(const int x, const int y) const;
	void setUnion(const int x, const int y);
	void showGoup() const;

private:
	int SIZE;
	int* m_uf;

	void dispose();
	void initialize(const UF& uf);
};
