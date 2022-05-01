//studying array 
#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

void doSomething(int students_scores[]) 
{
	cout << (int)&students_scores << endl;
	cout << (int)&students_scores[0] << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "Size in doSomething " << sizeof(students_scores) << endl;

}

int main()
{
	const int num_students = 20; 
	//cin >> num_students;

	int students_scores[num_students] = {1, 2, 3, 4, 5, }; 

	cout << (int)students_scores << endl;
	cout << (int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "Size in main " << sizeof(students_scores) << endl;


	doSomething(students_scores); 

	return 0;
}

