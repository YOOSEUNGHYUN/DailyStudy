//studying Pointers to pointers and dynamic multidimensional arrays
#include <iostream>

using namespace std;

int main()
{
	int *ptr = nullptr;
	int **ptrptr = nullptr;

	int value = 5;

	ptr = &value;
	ptrptr = &ptr;

	cout << ptr << " " << *ptr << " " << &ptr << endl;
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
	cout << *(*ptrptr) << endl;

	int ***ppptr, ****pppptr;

	return 0;

}
	

