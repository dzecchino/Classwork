#include <iostream>
using namespace std;

//Three things you must think through before you create new functions
//1. What does my function return?
//2. What is the name of my function?
//3. What does my function need to do what it does?

void simplestFunctionEver() {

	cout << "This is the simplest function ever\n";
}

//return: void | name: addNumbers | needs two integers
void addNumbers(int x, int y) {

	int result;
	result = x + y;
	cout << "Result from addNumbers: " << result << endl;
}

//return: int | name: adds | needs two integers
int adds(int x, int y) {

	int result;
	result = x + y;
	return result;
}

int main() {
	int a = 10;
	int b = 20;
	int catcher;
	cout << "Hello from main\n";


	simplestFunctionEver();


	addNumbers(a, b);
	addNumbers(35, 45);
	addNumbers(a, 95);


	catcher = adds(100, 200);
	cout << "adds just returned this: " << catcher << endl;

	cout << "I want to add 20, 30, and then 40, 50, and then add them all together\n";

	cout << "That is: " << adds(adds(20, 30), adds(40, 50)) << endl;

	system("pause");
	return 0;
}