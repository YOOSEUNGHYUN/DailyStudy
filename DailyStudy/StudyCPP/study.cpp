//studying Implicit Type Conversion, Explicit Type Conversion
#include <iostream>
#include <typeinfo>
#include <iomanip>
using namespace std;

int main()
{
	//numeric conversion
	cout << 5u - 10;

	//int,unsigned int, long, unsigned long,
	//long long, unsigned long long, float, double,
	//long double

	int i = static_cast<int>(4.0);

	return 0;
}
