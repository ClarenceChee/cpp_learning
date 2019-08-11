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

	int nights = 1001;
	int * pt = new int;
	*pt = 1001;

	cout << "nights value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;

	double * pd = new double;
	*pd = 10000001.0;

	cout << "double "
		 << "value = " << *pd << ": location =" << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt)
		 << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof(pd);
	cout << ": size of *pd = " << sizeof(*pd) << endl;

	double * p3 = new double [3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 += 1;
	cout << "Now p3[0] is " << p3[0] << " and "
		 << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 -1;
	delete [] p3;

	cin.get();
	return 0;
}

