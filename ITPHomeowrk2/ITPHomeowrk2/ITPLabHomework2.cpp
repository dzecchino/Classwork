//I pledge my honor that I have abided by the Stevens Honor System.
			//Dominic Zecchino

#include <iostream>

using namespace std;

int factorial(int n);

int main() {
	float x;
	float y;
	float z;
	float w;
	int n;
	float posNeg;


	cout << "Give me a number!" << endl;
	cin >> x;
	cout << "Give another, I'll add them!" << endl;
	cin >> y;

	cout << "Your number is " << x + y << ". Look how smart I am!" << endl;

	cout << "Input another number. Let's call it number 3. " << endl;
	cin >> z;
	cout << "Another now. We'll call it number 4." << endl;
	cin >> w;
	cout << "Great! I'm really going to prove my intelligence now." << endl;

	cout << "The multiplication of your inputs is " << z * w << endl;
	cout << "The division of your inputs ((number 3)/(number 4)) is " << z / w << endl;
	cout << "The division of your inputs ((number 4)/(number 3)) is " << w / z << endl;

	cout << "Can you tell if your number is poitive or negative? I can, give me a number again!" << endl;
	cin >> posNeg;

	if (posNeg > 0) {
		cout << "Easy, your number is positive." << endl;

	}
	else if (posNeg < 0) {

		cout << "Easy, your number is negative." << endl;
	}

	else {
		cout << "Did you think I wasn't prepared for a zero? This is neither positive nor negative." << endl;
	}
	cout << "Time to try something new: Factorials." << endl;
	cout << "Enter a positive number." << endl;
	cin >> n;

	cout << "The factorial of " << n << " is equal to " << factorial(n) << endl;



	system("pause");
	return 0;

}

	int factorial(int n)
{

	if (n > 1)
		return n * factorial(n - 1);
	else return 1;




}
	//Factorial code written with help from https://www.programiz.com/cpp-programming/examples/factorial-recursion
