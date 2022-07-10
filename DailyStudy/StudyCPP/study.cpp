//studying C-style string symbolic constants
#include <iostream>
using namespace std;

const char* getName()
{
	return "Hyoni Hyoni";
}

int main()
{
	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";
	const char *name = "Hyoni Hyoni";
	
	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << name << endl;

	char c = 'Q';
	cout << *&c << endl;

	return 0;

}    
