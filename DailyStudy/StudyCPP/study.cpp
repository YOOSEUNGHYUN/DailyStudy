//��������,��������,���ο���,�ܺο���
#include <iostream>
#include "MyConstant.h"

using namespace std;

/*extern*/ void doSomething(); //���⼭ extern�� ��������

/*
int g_x; //external linkage
static int g_x; //internal linkage
const int g_x; // X

extern int g_z;
extern const int g_z;

int g_y(1);
static int g_y(1);
const int g_y(1);

extern int g_w(1);
extern const int g_w(1);
*/

int main()
{
	cout << "In study.cpp file " << Constants::pi << " " << &Constants::pi << endl;

	doSomething();

	return 0;
}
