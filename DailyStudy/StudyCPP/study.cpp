//studying Passing Arguments by Reference(Call by Reference))
#include <iostream>

using namespace std;

typedef int* pint;

//void foo(int *&ptr)
void foo(pint &ptr)
{
	cout << ptr << " " << &ptr <<endl;
}

int main()
{
	int x = 5;
	//int *ptr = &x;
	pint ptr = &x;

	cout << ptr << " " << &ptr << endl;

	foo(ptr);

	return 0;
}

