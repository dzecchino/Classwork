#include <iostream>
#include <string>
using namespace std;
int main()
{
	/*
	int var = 0;
	cout << "Enter a number" << endl;
	cin >> var;

	if (var % 2 == 0) {
		cout << "Even" << endl;
	}
	else {
		cout << "Odd" << endl;
	}
	*/
	string MM;
	string DD;
	string YYYY;

	cout << "Enter your birth month in the form of MM" << endl;
	cin >> MM;

	cout << "Enter your birth day in the form of DD" << endl;
	cin >> DD;

	cout << "Enter your birth year in the form of YYYY" << endl;
	cin >> YYYY;


	cout << "Your birthday is " << MM << "/" << DD << "/" << YYYY << endl;

	system("pause");
	return 0;



	
}