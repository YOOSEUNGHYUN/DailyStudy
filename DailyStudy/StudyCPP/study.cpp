//studying using문과 모호성
#include <iostream>

namespace a
{
	int my_var(10);
	int my_a(123);
	int count(12312312);
}

namespace b
{
	int my_var(20);
	int my_b(456);
}

int main()
{
	using namespace std;

	{
		//using namespace a;
		cout << a::my_var << endl;
		cout << a::count << endl;
	}

	{
		using namespace b;
		cout << my_var << endl;
	}
	
	return 0;
}