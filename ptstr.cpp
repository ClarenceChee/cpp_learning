#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char * bird = "wren";
	char * ps;

	cout << animal << " and "
		 << bird << "\n";

	cout << "Enter a kind of animal: ";
	cin >> animal;
	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy():\n"
		 << animal << " at " << &animal << "\n" 
		 << ps << " at " << &ps << "\n" << (int *) ps << endl;
	int abc = 12;
	int * p_abc = &abc;
	char botony[20] = "tree";
	char * p_botony;
	p_botony = botony;
	cout << "int: " << abc << "; pointer: " << p_abc << endl;
	cout << "char: " << botony << "; pointer: " << (int *) p_botony << endl;

	cin.get();
	cin.get();
	return 0;
}

