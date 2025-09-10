#include"RecordManager.h"

// Constructor.
RecordManager::RecordManager(string fileDirectory)
{

	FILEDIRECTORY = fileDirectory;

}


/// <summary>
/// Acts as the inital landing page and, navigates between the menu and the exit.
/// </summary>
void RecordManager::CreateRecord()
{

	system("cls");

	cout << "=================================================" << endl;
	cout << "                 Create Record                   " << endl;
	cout << "=================================================" << endl;
	cout << "Please type out your information and,\npress Enter" << endl;
	cout << "-------------------------------------------------" << "\n\n";


	// Input Data To Record Struct.
	studentRecord newStudentRecord;

	cout << "Name : ";
	cin >> newStudentRecord.name;

	cout << "ID Number : ";
	cin >> newStudentRecord.numberID;

	cout << "Roll Number : ";
	cin >> newStudentRecord.rollID;

	cout <<  "Maths Grade : ";
	cin >> newStudentRecord.mathsMark;




	// Save Record To File Directory




	cout << endl << "FILE HAS BEEN CREATED";
	Sleep(500);
	system("cls");

}
