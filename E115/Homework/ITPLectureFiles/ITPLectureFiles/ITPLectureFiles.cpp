#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	//================================================
	//Option 1: Creating content
	//			open files, create files if necessary
	//			write stuff into files
	//================================================

	string name, phone;
	char choice;
	ofstream writer; // writer can create new files and write inside of them

	cout << "Do you want to create a new contact> [y/n]\n";
	cin >> choice;

	if (choice == 'y') {
		cout << "First name\n";
		cin >> name;
		cout << "Phone number?\n";
		cin >> phone;
	}
	else {

	}
	//1. Create a new file or open an existing one
	writer.open("Contacts.txt", ios::app);
	//2. Write stuff into it
	writer << name << "   " << phone << endl;
	//3. Save and close
	writer.close();



	//====================================
	// Option 2: Open files in read-only mode
	//====================================

	ifstream reader; // these can open files in read only mode.

	//1. Open your file
	reader.open("Contacts.txt");
	//2. Read the file (line by line)

	//! = NOT the case that my reader has found "end if file" (eof)
	while (!reader.eof()) {
		reader >> name >> phone;
		cout << name << "  " << phone << endl;

	}
	//3. lose and exit
	
	system("pause");
	return 0;
}