//studying Dynamic memory allocation with new and delete
#include <iostream>
using namespace std;

int main()
{
	//int variable;
	//variable = 7;

	int *ptr = new (std::nothrow) int{ 7 };

	if(ptr) //!= nullptr
	{ 
		cout << ptr << endl; //ptrÀº ÁÖ¼Ò
		cout << *ptr << endl; //de-referncing
	}
	else
	{
		cout << "Could not allocate memory" << endl;
	}

	delete ptr;
	ptr = nullptr;

	cout << "After delete" << endl;
	if(ptr != nullptr)
	{ 
		cout << ptr << endl; 
		cout << *ptr << endl;
	}

	return 0;
}    
