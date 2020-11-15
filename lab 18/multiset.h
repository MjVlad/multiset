#pragma once
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;

class Multiset {
private:
	std::vector<int> m_set;
public:
	Multiset() {};
	
	int size() {return m_set.size();}

	bool insert(int value);
	int find(int value) const;
	void erase(int value);

	friend std::ostream& operator<<(std::ostream& out, const Multiset& set);
};