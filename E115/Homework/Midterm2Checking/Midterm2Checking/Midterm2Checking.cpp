/*#include <iostream>
using namespace std;

int main() {
	int firstValue;
	int secondValue;
	int sum;

	cout << "Enter an integer. " << endl;
	cin >> firstValue;
	cout << "Enter another." << endl;
	cin >> secondValue;

	sum = firstValue + secondValue;

	cout << "The sum of your values is " << sum << endl;

	system("pause");
	return 0;

}*/

/*#include <iostream>

using namespace std;

int main() {
	int value;

	cout << "Enter an integer." << endl;
	cin >> value;

	if (value % 2 == 0) {
		cout << "This is an even number.\n";
	}
	else {
		cout << "This is an odd number.\n";
	}

	system("pause");
	return 0;
}*/
/*
#include <iostream>

using namespace std;

int main() {
	int whyIsThisOnTheMidterm = 1;

	while (whyIsThisOnTheMidterm <= 5) {
		cout << "Programming is awesome \n";

		whyIsThisOnTheMidterm++;
	}

	system("pause");
	return 0;
}
*/
/*
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream writer;

	writer.open("Midterm.txt", ios::app);

	writer << "Programming is epic \n";

	system("pause");
	return 0;
}
*/

#include <iostream>

using namespace std;


class VendingMachine {
public:
	
	int cansOfSprite;
	float priceForSprite;

	VendingMachine() {
		cansOfSprite = 20;
		priceForSprite = 1.25;
	}

	void dispenseSprite(int cash) {
		float change;
		if (cash >= priceForSprite && cansOfSprite > 0) {
			cout << "Here's your can of Sprite." << endl;
			change = cash - priceForSprite;
			cout << "Here's your change: " << change << endl;
			cansOfSprite--;
		}
		else {
			if (cansOfSprite == 0) {
				cout << "Sorry, out of Sprite. Here's your refund" << endl;
			}
			cout << "The price is $1.25\n";

		}
	}



};

int main() {

	int x;
	VendingMachine var, var1, var2;
	float money;

	while (true) {
		cout << "Give me money\n";
		cin >> money;
		var.dispenseSprite(money);
	}
	


	system("pause");
	return 0;
}
