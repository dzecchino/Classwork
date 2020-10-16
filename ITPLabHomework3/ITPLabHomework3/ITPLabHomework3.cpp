//I pledge my honor that I have abided by the Stevens Honor System.
			//Dominic Zecchino

#include <iostream>

#include <string>
using namespace std;

int factorial1(int n);

int factorial2(int v);

int n;
int v;

int main() {
	float x;
	float y;
	float z;
	float w;
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

	int value1 = factorial1(n);

	cout << "The factorial of " << n << " is equal to " << factorial1(n) << endl;
	
	cout << "Enter another positive number." << endl;
	cin >> v;
	
	int value2 = factorial2(v);

	cout << "The factorial of " << v << " is equal to " << factorial2(v) << endl;

	cout << "The sum of your factorials is " << value1 + value2 << endl;

	string statement1;
	string statement2;

	cout << "I'll adjoin statements for you. Give me a portion of a sentence." << endl;
	cin >> statement1;
	cout << "Type out the rest of that sentence and hit enter." << endl;
	cin >> statement2;

	cout << "The combined final statement is: " << statement1 + " " + statement2 << endl;

	system("pause");
	return 0;

}

int factorial1(int n)
{
	if (n > 1)
		return n * factorial1(n - 1);
	else return 1;
}

int factorial2(int v)
{
	if (v > 1)
		return v * factorial2(v - 1);
	else return 1;
}
