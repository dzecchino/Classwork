#include<iostream>
#include<string>
using namespace std;

int main()
{
	//first you create variables
	//<type> <name>
	char c;
	int x;
	float y;
	string str;

	//second: process info stored in variables
	cout << "Give me a number" << endl;
	cin >> x;
	cout << "What's your name?" << endl;
	cin >> str;
	cout << "Nice to meet you, " << str << endl;



	//math
	//<l-value> = <r-value>
	y = (float) x/2;
	str = str + " is awesome!";
	cout << str << endl;


	//third: communicate the result back to the user
	cout << y << endl;

	system("pause");
	return 1;
}