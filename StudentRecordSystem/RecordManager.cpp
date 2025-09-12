#include"RecordManager.h"

// Constructor.
RecordManager::RecordManager()
{

	// Ensure File Store Exists.
	ifstream readRecordFileStore(FILEDIRECTORY);

	if (readRecordFileStore.peek() == std::ifstream::traits_type::eof()) 
	{
		readRecordFileStore.close();

		std::cout << "File is empty.\n";

		ofstream writeRecordFileStore(FILEDIRECTORY);
		json recordFileStoreJSONSturcture = json::array();

		writeRecordFileStore << recordFileStoreJSONSturcture.dump(4);

		writeRecordFileStore.close();

	}
	else {
		std::cout << "File has content.\n";
		readRecordFileStore.close();
	}

	cout << "File Closed.\n";
	readRecordFileStore.close();

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
	

	// Read Directory.
	ifstream readRecordFileStore(FILEDIRECTORY);
	// Convert Directory To JSON And Close Directory.
	json recordFileStoreJSON;
	readRecordFileStore >> recordFileStoreJSON;
	readRecordFileStore.close();

	// Convert Entry To JSON.
	json newRecordEntryJSON = newStudentRecord;

	// Append Entry To Directory.
	recordFileStoreJSON.push_back(newRecordEntryJSON);

	// Write The Directory Back To Its File.
	ofstream writeRecordFileStore(FILEDIRECTORY);
	writeRecordFileStore << recordFileStoreJSON;
	writeRecordFileStore.close();


	cout << endl << "FILE HAS BEEN CREATED";
	Sleep(1000);
	system("cls");

}


json RecordManager::GetRecord(int rollID) 
{

	// Read Directory.
	ifstream readRecordFileStore(FILEDIRECTORY);
	// Convert Directory To JSON And Close Directory.
	json recordFileStoreJSON;
	readRecordFileStore >> recordFileStoreJSON;
	readRecordFileStore.close();

	for (json record : recordFileStoreJSON)
	{
		if (record["rollID"] == rollID) 
		{
			// TO-DO : Format to a nice string
			return record;
			 
		}
		
	}


	json noRecordFoundJSON = { "No Such Record" };
	return noRecordFoundJSON;
}