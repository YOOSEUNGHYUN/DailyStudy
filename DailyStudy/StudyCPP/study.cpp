//studying std::vector
#include <iostream>
//#include <array>
#include <vector>

using namespace std;

int main()
{
	//std::array<int, 5> array;

	int *my_arr = new int[5];

	vector<int> arr = { 1,2,3,3,4,5 };

	arr.resize(2);

	for (auto &itr : arr)
		cout << itr << " ";
	cout << endl;

	cout << arr.size() << endl;
	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	delete[] my_arr;

	return 0;
}