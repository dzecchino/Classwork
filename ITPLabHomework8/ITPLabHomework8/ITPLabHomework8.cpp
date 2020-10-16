#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void addNewContact() {
	string name;
	string number;
	ofstream writer; //allows writing into something

	cout << "Give me a name and number: \n";
	cin >> name; //no spaces
	cin >> number;

	writer.open("phonebook.txt", ios::app);
	writer << name << "      " << number << endl; // a bunch of spaces
	writer.close();

}

void searchContact() {
	string name;
	ifstream reader;
	string line;
	string substring;
	bool isFound = false;
	cout << "Who do you want to look for?" << endl;
	cin >> name;
	reader.open("phonebook.txt");

	if (reader.is_open()) {
		while (getline(reader, line)) {
			substring = line.substr(0, line.find(" "));
			if (name == substring) {
				cout << line << endl;
				isFound = true;
			}
		}
		if (!isFound) {
			cout << "Contact not found. \n";
		}
	}
	else {
		cout << "File not found \n";

	}
}

void displayContact() {
	ifstream reader;
	string line;
	reader.open("phonebook.txt");
	if (reader.is_open()) {

		while (getline(reader, line)) {
			cout << line << endl;
		}

	}
	else {
		cout << "File not found\n";
	}
}

int main() {
	int choice;

	while (1) {
		cout << endl;
		cout << "[1] --- add contact\n";
		cout << "[2] --- search for a contact\n";
		cout << "[3] --- display contacts\n";
		cout << "Anything else to quit\n";
		cout << ">> ";
		cin >> choice;

		switch (choice) {
		case 1: addNewContact();
			break;

		case 2: searchContact();
			break;

		case 3: displayContact();
			break;

		default: exit(1);


		}



		system("pause");
		return 0;
	}
}