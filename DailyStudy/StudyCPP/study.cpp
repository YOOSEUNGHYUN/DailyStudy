//studying C-style strings
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char source[] = "Copy this!";
	char dest[50]; 
	strcpy_s(dest, 50, source);

	//strcat()
	strcmp(dest, source);

	if (strcmp(dest, source) == 0)
	{
		cout << " same " << endl;
	}

	return 0;
}

