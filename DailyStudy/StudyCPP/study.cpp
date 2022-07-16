//studying Reference Variable
#include <iostream>
using namespace std;


void printElements(int (&arr)[5])
{
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << endl;
	}
	
	cout << endl;
}

int main()
{
	const int length = 5;
	int arr[length] = { 1,2,3,4,5 };

	printElements(arr);

	return 0;
}

