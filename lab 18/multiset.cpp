#include "multiset.h"

bool Multiset::insert(int value) {
	auto it = std::lower_bound(m_set.begin(), m_set.end(), value);
	m_set.insert(it, value);
	return true;
}

int Multiset::find(int value) const {
	auto it = std::lower_bound(m_set.begin(), m_set.end(), value);
	int count = 0;
	for (count; it != m_set.end(); count++) {
		if (*it != value) break;
		it++;
	}
	return count;
}

void Multiset::erase(int value) {
	auto it = std::lower_bound(m_set.begin(), m_set.end(), value);
	if (*it == value)
		m_set.erase(it);
}

std::ostream& operator<<(std::ostream& out, const Multiset& set) {
	std::copy(set.m_set.begin(), set.m_set.end(), std::ostream_iterator<int>(out, " "));
	return out;
}
