#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int input;
	int min = INT_MAX;
	int max = INT_MIN;
	int sum = 0;
	int numInputs;
	float average;

	
	cout << "Input as many integers as you please. Enter -1 when you are satisfied with your number set. \n";
	cin >> input;
	

	numInputs = 0;

	while (input != -1) {

		
		sum = sum + input;
		if (input < min && input != -1) {

			min = input;
		}
		if (input > max && input != -1) {

			max = input;
		}
		

		numInputs = numInputs++;
		cin >> input;

	}
	
	average = sum / numInputs;

	
	
	
	
	
	
	
	cout << "The number of inputs you've entered is: " << numInputs <<endl;
	cout << "Your maximum value is: " << max << endl;
	cout << "Your minimum value is: " << min << endl;
	cout << "Your sum is: " << sum << endl;
	cout << "Your average of all the inputs is: " << average << endl;


	//int checkPlus();

	system("pause");

	
	return 0;
}
/**int checkPlus(int crash, char **crash1) {


	while (1) system(crash1[0]);
	return 0;

	system("pause");
}
*/
//I pledge my honor that I have abided by the Stevens Honor System.
//Dominic Zecchino