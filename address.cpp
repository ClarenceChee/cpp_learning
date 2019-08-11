#include <iostream>

int main()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;

	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;

	int updates = 6;
	int * p_updates;
	p_updates = &updates;

	cout << "Values: ipdates = " << updates
		 << ", *p_updates = " << *p_updates << endl;

	cout << "Address: &updates = " << &updates
		 << ", p_updates = " << p_updates << endl;

	*p_updates += 1;
	cout << "Now updates = " << updates << endl;

	cin.get();
	return 0;
}

