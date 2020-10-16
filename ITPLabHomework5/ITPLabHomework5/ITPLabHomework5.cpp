#include <iostream>

using namespace std;

int main() {

	int input;
	int sum = 0;
	int min = INT_MAX;
	int max = INT_MIN;

	cout << "Give me 10 integers."
	
		for (int i = 0; i < 10; i++) {

			cin >> input;
			sum = sum + input;
			cout << "int i: " << "\tsum: " << sum << endl;
			
			

			if (input < min) {

				min = input;
			}
			else if (input > max) {

				max = input;
			}
			else {

			}

	}
	cout << "Your minimum value is " << min << endl;
	cout << "Your maximum value is " << max << endl;



	system("pause");
	return 0;

}