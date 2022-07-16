//studying Reference Variable
#include <iostream>
using namespace std;

int main()
{
	int value = 5;

	int* ptr = nullptr;
	ptr = &value;
	
	int &ref = value;

	cout << "value : " << &value << endl;
	cout << "ref : " << &ref << endl;
	cout << "ptr : " << ptr << endl;
	cout << "&ptr : " << &ptr << endl;

	return 0;
}

