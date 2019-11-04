#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <windows.h>

//fmodf(x,y) gives the remainder
using namespace std;

class atmMachine {
public:
	int Balance;
	void Deposit() {
		float depositType;
		float Cash;
		float Check;
		

		cout << "Is this a cash or check deposit.\n";
		cout << "[1] --- Cash\n";
		cout << "[2] --- Check\n";
		cin >> depositType;

		if (depositType == 1) {
			cout << "Enter the amount you'd like to deposit. Max deposit is $100.\n";
			cin >> Cash;
			while (Cash < 0 || Cash > 100) {
				cout << "Enter a value less than or equal to $100.\n";
				cin >> Cash;
			}

			Balance = Balance + Cash;
		}
		else if (depositType == 2) {
			cout << "Enter the amount you'd like to deposit.\n";
			cin >> Check;
			while (Check < 0) {
				cout << "Please enter a value greater than 0.\n";
				cin >> Check;
			}

			Balance = Balance + Check;

		}
		else {
			cout << "Error. Please enter a 1 or 2.\n";
		}

	}
	void Withdraw() {
		int Withdrawl;
		
		cout << "Enter the amount you'd like to withdrawl.\n";
		
		cin >> Withdrawl;

		while (Withdrawl % 20 != 0) {
			cout << "Enter a value that is a multiple of 20.\n";
			cin >> Withdrawl;
		}
		

		Balance = Balance - Withdrawl;
	}
	void checkBalance() {
		cout << "Your balance is $" << Balance << endl;
	}
	
	
	atmMachine(){ 
		Balance = 1000; 
	}
};

bool stringComparison(string s1, string s2) {

	if (s1.length() == s2.length()) {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i]) {
				return false;
			}
			
		}
		return true;
	}
	else {
		return false;
	}
	
}

/*
string getpass(const char *prompt, bool show_asterisk = true)
{
	const char BACKSPACE = 8;
	const char RETURN = 13;

	string password;
	unsigned char ch = 0;

	cout << prompt << endl;

	DWORD con_mode;
	DWORD dwRead;

	HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);

	GetConsoleMode(hIn, &con_mode);
	SetConsoleMode(hIn, con_mode & ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT));

	while (ReadConsoleA(hIn, &ch, 1, &dwRead, NULL) && ch != RETURN)
	{
		if (ch == BACKSPACE)
		{
			if (password.length() != 0)
			{
				if (show_asterisk)
					cout << "\b \b";
				password.resize(password.length() - 1);
			}
		}
		else
		{
			password += ch;
			if (show_asterisk)
				cout << '*';
		}
	}
	cout << endl;
	return password;
}*/
//the above function was written with help from cplusplus.com

int main() {
	int A;

	atmMachine ATM;
	/*string Password;
	string Login;

	ofstream writer;

	cout << "Enter in a password for your account.\n";
	Password = getpass("Please enter the password: ", true);
	

	writer.open("Contacts.txt", ios::app);
	
	writer << Password << endl;
	
	writer.close();

	cout << "Re-enter your password.\n";
	Login = getpass("Please enter the password: ", true);
	*/
	//if (stringComparison(Password,Login)) {

		cout << "Choose the activity you would like to preform.\n";
		cout << "[1] --- Check Balance\n";
		cout << "[2] --- Make Deposit\n";
		cout << "[3] --- Make Withdrawal\n";
		cout << "[4] --- Exit\n";
		cin >> A;

		while (A != 1 && A != 2 && A != 3 && A != 4) {
			cout << "Please enter 1, 2, 3, or 4.\n";
			cin >> A;
		}
		while (A == 1 || A == 2 || A == 3) {
			while (A == 1) {
				ATM.checkBalance();
				cout << "[1] --- Check Balance\n";
				cout << "[2] --- Make Deposit\n";
				cout << "[3] --- Make Withdrawal\n";
				cout << "[4] --- Exit\n";
				cin >> A;
			}
			while (A == 2) {
				ATM.Deposit();
				cout << "[1] --- Check Balance\n";
				cout << "[2] --- Make Deposit\n";
				cout << "[3] --- Make Withdrawal\n";
				cout << "[4] --- Exit\n";
				cin >> A;
			}
			while (A == 3) {
				ATM.Withdraw();
				cout << "[1] --- Check Balance\n";
				cout << "[2] --- Make Deposit\n";
				cout << "[3] --- Make Withdrawal\n";
				cout << "[4] --- Exit\n";
				cin >> A;
			}
			if (A == 4) {
				cout << "Thank you for your service.\n";
			}
		}
//	}

	//else {
	//	cout << "Sorry, incorrect password.\n";
	//}
	

	
	
	system("pause");
	return 0;
} 