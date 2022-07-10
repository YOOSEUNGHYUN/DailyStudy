//studying Pointer Arithmetic and Array Indexing
#include <iostream>
using namespace std;

int main()
{
	char name[] = "Hyoni Hyoni";

	const int num_name = sizeof(name) / sizeof(name[0]);

	char* ptr = name;

	for (int i = 0; i < num_name; ++i)
	{
		cout << *(ptr + i) << endl;
	}

	return 0;
	
}    
