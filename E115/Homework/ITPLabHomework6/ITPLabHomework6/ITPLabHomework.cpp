#include <iostream>

using namespace std;

void printGreeting() {

	cout << "Hope youre having a good day!\n";

}

void divideNumbers(float x, float y) {
	float divide;

	divide = x / y;
	cout << "The division of your first number by your second is : " << divide << endl;


}

int factorial(int num) {
	float remainder;
	int factorial = 1;
	
	remainder = num % 1;
	if (remainder == 0 && num >= 0) {
		for (int i = 1; i <= num; i++) {
			factorial *= i;
		}
		cout << "The value is: " << factorial << endl;
	}
	else if (num < 0) {
		cout << "The factorial of " << num << " is zero.\n";
	}
	else {
		cout << "Enter an integer if you want a factorial value.\n";
	}

	return 0;
}

void fibonacci(int N) {
	int next = 1;
	int prev = 0;
	int mid;

	//N >=0, first number always outputs
	cout << prev << ' ';

	for (int i = 0; i < N - 1; i++) {
		cout << next << ' ';
		mid = next; // holder variable
		next = prev + next;
		prev = mid;
	}
}

int main() {
	float x;
	float y;
	int num;
	int N;
	printGreeting();
	
	cout << "Input your first number\n";
	cin >> x;

	cout << "Input your second number\n";
	cin >> y;

	while (y == 0) {
		cout << "Cannot preform division. Input new value\n";
		cin >> y;

	}

	divideNumbers(x, y);

	cout << "Enter a value to find it's factorial value.\n";
	cin >> num;
	factorial(num);

	cout << "How many terms would you like to add in the fibonacci sequence.\n";
	cin >> N;
	fibonacci(N);

	system("pause");
	return 0;

}