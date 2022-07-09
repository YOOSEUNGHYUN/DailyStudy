//studying pointer and array
#include <iostream>
using namespace std;

//= void printArray(int array[])
void printArray(int *array)
{
	cout << sizeof(array) << endl;
	cout << "de-referncing : " << *array << endl;
	*array = 100;
}

int main()
{
	int array[5] = { 9, 7, 5, 3, 1 };

	cout << sizeof(array) << endl; //20
	
	int *ptr = array;

	cout << sizeof(ptr) << endl; //4 (pointer)
	        
	printArray(array);

	cout << array[0] <<" " << *array << endl;

	return 0;

}    