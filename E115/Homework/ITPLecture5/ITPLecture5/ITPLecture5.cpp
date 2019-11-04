#include<iostream>
using namespace std;

int main() {
	int number = 0;
	// You know how many times you want to repeat
	//for(<counter start>; <counter end>; <make progress in steps>)
	//i++ <--> i = i + 1
	for (int i = 0; i < 10; i = i++) {
		cout << "Simple little statement. \n";
	}
	

	//You dont quite know how many times, but... there is a 'condition'
	//While (<condition>)
	while (number != -1) {

		cout << "Annoying block of code \n";
		cout << "I'll keep repeating myself \n";
		cout << "Give me -1 to stop, or else.. \n";
		cin >> number;
	}

	//three: repeat infinitely
	while (true) {
		cout << "This never ends. Seriously. You have to kill the program. \n";
	}



	system("pause");
	return 0;
}