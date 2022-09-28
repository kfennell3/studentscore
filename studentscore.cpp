// Your Name
// Date:
// Program Title:
// Program Description:

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>


using namespace std;

// Named constants

int main()
{
	string name1, name2, name3;
	double score1, score2, score3, score4, score5, score6, score7, score8, score9;
	double avg1, avg2, avg3;

	// Declare file stream constants
	ifstream inData;
	ofstream outData;

	//Open the input output files
	inData.open("scrs.txt");
	outData.open("output.out");

	//Code for data manipulation
	getline(inData, name1);
	inData >> score1 >> score2 >> score3;
	inData.ignore();
	getline(inData, name2);
	inData >> score4 >> score5 >> score6;
	inData.ignore();
	getline(inData, name3);
	inData >> score7 >> score8 >> score9;

	//calculation
	avg1 = (score1 + score2 + score3) / 3;
	avg2 = (score4 + score5 + score6) / 3;
	avg3 = (score7 + score8 + score9) / 3;

	//output to the file
	outData << fixed << showpoint << setprecision(2);

	outData << setw(25) << left << "Name" << setw(8) << "Score 1" << setw(8) << "Score 2" << setw(8) << "Score 3" << setw(8) << "Average" << endl;
	outData << setw(25) << left << name1 << setw(8) << score1 << setw(8) << score2 << setw(8) << score3 << setw(8) << avg1 << endl;
	outData << setw(25) << left << name2 << setw(8) << score4 << setw(8) << score5 << setw(8) << score6 << setw(8) << avg2 << endl;
	outData << setw(25) << left << name3 << setw(8) << score7 << setw(8) << score8 << setw(8) << score9 << setw(8) << avg3 << endl;

    //Output to screen
	cout << "Processing data" << endl;
	cout << "Please check output.out file" << endl;

	//closing the files
	inData.close();
	outData.close();

	return 0;
}