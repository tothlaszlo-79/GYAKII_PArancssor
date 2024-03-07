#include <iostream>
#include <fstream>

using namespace std;

int main(int argdb, char *argtomb[])
{
	if (argdb != 3)
	{
		cerr << "\nInditas helyesen: szam1 szokoz szam2" << endl;
		system("PAUSE");
		return 1;
	}
	double a, b;
	a = atof(argtomb[1]);
	b = atof(argtomb[2]);
	cout << "A szamok szorzata: " << endl;
	cout << a << " * " << b << " = " << a * b << endl;

	system("PAUSE");
	return 0;


}
