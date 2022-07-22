//studying std::array
#include <iostream>
#include <array>

using namespace std;

void printLength(const array<int, 5> &my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{
	//int array[] = { 1,2,3,4,5 };

	array<int, 5>my_arr = { 1,2,3,4,5 };
	my_arr = { 0,1,2,3,4 };
	my_arr = { 0,1,2 };

	cout << my_arr.size() << endl;

	printLength(my_arr);

	return 0;

}
	

