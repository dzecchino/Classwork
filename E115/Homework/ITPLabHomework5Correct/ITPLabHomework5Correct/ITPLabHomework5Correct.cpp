#include <iostream>

using namespace std;

int main() {

	int input;
	int sum = 0;
	int min = INT_MAX;
	int max = INT_MIN;

	cout << "Give me 10 integers. \n";

		for (int i = 0; i < 10; i++) {

			cin >> input;
			sum = sum + input;
			cout << "\tsum: " << sum << endl;



			if (input < min) {

				min = input;
			}
			if (input > max) {

				max = input;
			}
	

		}
	cout << "Your minimum value is " << min << endl;
	cout << "Your maximum value is " << max << endl;



	system("pause");
	return 0;

}
//I pledge my honor that I have abided by the Stevens Honor System.
//Dominic Zecchino