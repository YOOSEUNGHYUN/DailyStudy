//studying Type aliases
#include <iostream>
#include <vector>
#include <cstdint> //고정너비정수
using namespace std;

int main()
{
	//typedef vector<pair<string, int> > pairlist_t;
	using pairlist_t = vector<pair<string, int> >;

	pairlist_t pairlist1;
	pairlist_t pairlist2;

	return 0;
}
	

