#include "multiset.h"
#include <time.h>

int main() {
	Multiset a;
	std::srand(clock());
	for (int i = 0; i < 10; i++)
		a.insert(rand());
	a.insert(15000);
	a.insert(15000);
	a.insert(15000);
	a.insert(-1);
	a.insert(-1);
	a.insert(-1);
	a.insert(100000);
	a.insert(100000);
	a.insert(100000);
	cout << a << endl;
	a.erase(100000);
	a.erase(100000);
	a.erase(-1);
	a.erase(101);
	cout << a << endl;
	cout << a.find(-1) << endl << a.find(101) << endl << a.find(100000) << endl;
}