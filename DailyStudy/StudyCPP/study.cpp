//studying enumerated types
#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

enum Color //user-defined data types
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	BLUE,

}; //중괄호가 끝나면 ; 꼭 쳐야한다.

int main()
{
	int color_id = COLOR_RED;

	Color my_color = static_cast <Color>(3);

	//cin >> my_color;

	//int in_number;
	//cin >> in_number;

	string str_input;

	getline(cin, str_input);

	if (str_input == "COLOR_BLACK")my_color = static_cast <Color>(0);
	//...

	cout << my_color << endl;

	return 0;
}
