#include <iostream>
#include <string>
//#include "gradestatistik.h"
using namespace std;

string subject[5] = { "Mathematics","Swedish","English","History","Physics" };
int credit[5];
char grade[6];

int addCredit(string subject[5], int credit[5]) {
	for (int i = 0; i <= 4; i++) {
		cout << "Enter grade for " << subject[i] << ": ";
		cin >> credit[i];
	}
	return credit[5];
}

void renderGrade(string subject[5], char grade[6]){
	for (int i = 0; i <= 4; i++) {
		cout << endl;
		cout << subject[i] << ": " << grade[i] << endl;
	}
}

char gradeToScale(char grade[6]) {
	for (int i = 0; i <= 4; i++) {
		if (credit[i] < 50) {
			grade[i] = 'F';
		}
		else if (credit[i] >= 50 && credit[i] < 60) {
			grade[i] = 'E';
		}
		else if (credit[i] >= 60 && credit[i] < 70) {
			grade[i] = 'D';
		}
		else if (credit[i] >= 70 && credit[i] < 80) {
			grade[i] = 'C';
		}
		else if (credit[i] >= 80 && credit[i] < 90) {
			grade[i] = 'B';
		}
		else if (credit[i] >= 90 && credit[i] <= 100) {
			grade[i] = 'A';
		}
	}
	return grade[6];
}

void Statistics(char grade[6]) {
	int gradeA = 0, gradeC = 0, gradeF = 0;
	for (int i = 0; i <= 4; i++) {
		if (grade[i] == 'A') {
			gradeA++;
		}
		if (grade[i] == 'C') {
			gradeC++;
		}
		if (grade[i] == 'F') {
			gradeF++;
		}
	}
	cout << endl;
	cout << "Amount A: " << gradeA << endl;
	cout << "Amount C: " << gradeC << endl;
	cout << "Amount F: " << gradeF << endl;
	cout << endl;
	int sumcredit = credit[0] + credit[1] + credit[2] + credit[3] + credit[4];
	cout << "Total credit: " << sumcredit << endl;
}

int main()
{

	addCredit(subject, credit);
	gradeToScale(grade);
	renderGrade(subject, grade);
	Statistics(grade);

	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
