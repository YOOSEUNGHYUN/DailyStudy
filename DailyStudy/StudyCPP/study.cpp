//studying Reference Variable
#include <iostream>
using namespace std;

int main()
{
	int value1 = 5;
	int value2 = 10;

	int &ref1 = value1;

	cout << ref1 << endl;
	cout << &ref1 << endl;
	cout << &value1 << endl;
	cout << &value2 << endl;

	ref1 = value2;

	cout << ref1 << endl;
	cout << &ref1 << endl;
	cout << &value1 << endl;
	cout << &value2 << endl;

	return 0;

}
	

