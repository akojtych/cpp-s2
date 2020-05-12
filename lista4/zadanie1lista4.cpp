  
#include <iostream>
using namespace std;

class Wektor
{
private:
	size_t m_rozmiar;
	int* m_ptab;

public:
	Wektor(size_t n): m_rozmiar(n), m_ptab(new int[n])
	{
		for (int i = 0; i < m_rozmiar; i++)
		{
			m_ptab[i] = 0;
		}
	}

	~Wektor() { delete[] m_ptab; }

	size_t size() const { return m_rozmiar; }
	int& at(int n) { return m_ptab[n]; }
	int at(int n) const { return m_ptab[n]; }
};

int main()
{
	Wektor v(10);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << "\t";
	}
	return 0;
}


