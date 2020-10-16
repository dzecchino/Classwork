#include<iostream>

using namespace std;

int main()
{

	//1. Variables and project
	float midterm, homework, finalScore, project;
	char choice;

	//2. Data
	cout << "Your homework score?" << endl;
	cin >> homework;
	cout << "And the midterm?" << endl;
	cin >> midterm;

	//finalScore = 70% homework + 30% midterm
	finalScore = 0.7*homework + 0.3*midterm;
	cout << "Oh by the way, did you do that optional project? (y/n)" << endl;
	cin >> choice;

	if (choice == 'y' || choice == 'Y') {
		cout << "And what was the score?" << endl;
		cin >> project;

		if (project > 80) {
			finalScore = finalScore + 5;
		}
	}


	//3. Results
	//if(<condition>) {}
		if (finalScore > 90 || midterm ==100) {
			cout << "Congrats!" << endl;
			cout << "You get an A" << endl;

	}					//&&=and
		else if (finalScore > 80 && finalScore <= 90) {
			cout << "You get a B" << endl;
		}
		else if(finalScore > 70 && finalScore <= 80) {
			cout << "Dude.. that's a C" << endl;
		}
		else {
			cout << "Too bad :/" << endl;
		}
		system("pause");
		return 0;
}