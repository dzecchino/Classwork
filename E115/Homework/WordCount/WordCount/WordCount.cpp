#include <iostream>
#include <string>


using namespace std;

void Convert(string& text) {
	for (int i = 0; i < text.length(); i++) {
		text[i] = toupper(text[i]);
	}
}

int main() {
	string text;
	char search;
	int count = 0;
	int length = 0;
	
	cout << "Enter your text.\n";

	getline(cin, text);
	
	while (length != text.length()) {
			length++;
	}
	cout << "The length of this string is " << length << " characters." << endl;
	Convert(text);
	cout << "Which word are you looking to see how many times it appears?\n";
	cin >> search;

	for (int i = 0; i < text.length(); i++) {
		if (text[i] == search) {
			count++;
		}
	}
	
	cout << "The number of times '" << search << "' appears is " << count << endl;
	//find the amount of times a word appears in a given user input. 



	system("pause");
	return 0;
}