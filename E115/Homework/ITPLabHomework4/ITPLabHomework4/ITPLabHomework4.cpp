#include<iostream>
#include <string>

using namespace std;



int main() {
	bool done = false;
	while (!done) {
		int numHw;
		float homeworkGradeTotal;
		float homeworkAverage;
		float sum = 0;
		float weightHomework;
		int numMid;
		float midtermGradeTotal;
		float midtermAverage;
		float sumMid = 0;
		float weightMidterm;
		float finalExamGrade;
		float finalTotal;
		float weightFinal;
		float courseGrade;
		float extraCredit;
		

			cout << "How many homework assignments have you had? \n";
			cin >> numHw;


			for (int i = 1; i <= numHw; i++) {

				cout << "Assignment score? \n";
				cin >> homeworkGradeTotal;
				while (homeworkGradeTotal > 100) {
					cout << "Error. Inputs must be less than or equal to 100. \n";
					cin >> homeworkGradeTotal;
				}
				cout << "Extra credit recieved for this assignment? \n";
				cin >> extraCredit;
				sum = sum + homeworkGradeTotal + extraCredit;

			}

			homeworkAverage = sum / numHw;

			cout << "Your homework average is " << homeworkAverage << endl;

			cout << "What decimal value of your final grade is homework? \n";
			cin >> weightHomework;
			while (weightHomework > 1) {
				cout << "Error. Inputs must be less than or equal to 1. \n";
				cin >> weightHomework;

			}

			extraCredit = 0;

			cout << "How many midterms did you have? \n";
			cin >> numMid;
			
			for (int i = 1; i <= numMid; i++) {
				cout << "Midterm score? \n";

				cin >> midtermGradeTotal;
				while (midtermGradeTotal > 100) {
					cout << "Error. Inputs must be less than or equal to 100. \n";
					cin >> midtermGradeTotal;
				}
				cout << "Extra credit recieved for this assignment? \n";
				cin >> extraCredit;

				sumMid = sumMid + midtermGradeTotal + extraCredit;


			}
			midtermAverage = sumMid / numMid;
			cout << "Your midterm average is " << midtermAverage << endl;
			cout << "What is the weighted decimal value of your midterms? \n";
			cin >> weightMidterm;
			while (weightMidterm > 1) {
				cout << "Error. Inputs must be less than or equal to 1. \n";
				cin >> weightMidterm;

			}

			extraCredit = 0;

			cout << "What did you score on your final exam? \n";
			cin >> finalExamGrade;
			while (finalExamGrade > 100) {
				cout << "Error. Inputs must be less than or equal to 100. \n";
				cin >> finalExamGrade;
			}
			cout << "How many extra credit points were recieved for this assignment? \n";
			cin >> extraCredit;

			finalTotal = finalExamGrade + extraCredit;
			

			cout << "What is the weighted decimal value of your final exam on your total grade? \n";
			cin >> weightFinal;
			while (weightFinal > 1) {
				cout << "Error. Inputs must be less than or equal to 1. \n";
				cout << "What is the weighted decimal value of your final exam on your total grade? \n";
				cin >> weightFinal;

			}
			courseGrade = (weightHomework*homeworkAverage) + (weightMidterm*midtermAverage) + (weightFinal*finalTotal);

			if (weightHomework + weightMidterm + weightFinal == 1) {
				cout << "Your final grade for the course is " << courseGrade << endl;
				done = true;
			}
			else { 
				while (weightHomework + weightMidterm + weightFinal != 1) {
					cout << "The sum of your weighted values should equal 1. \n";
					cin >> weightFinal;
				}
				cout << "Your final grade for the course is " << courseGrade << endl;

				if (courseGrade >= 91) {
					cout << "Congrats! You've recieved an A! \n";
				}
				else if (courseGrade >= 81) {
					cout << "Not too bad! You've recieved a B. \n";

				}
				else if (courseGrade >= 71) {
					cout << "Getting low. This is a C. \n"; 
				
				}
				else {
					cout << "Unfortunately you get a D. \n";
				}
			}
			system("pause");
			return 0;
		}
		
	}
	//I pledge my honor that I have abided by the Stevens Honor System.
	//Dominic Zecchino