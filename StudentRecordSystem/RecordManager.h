#pragma once

#include <iostream>
#include<fstream>
#include<windows.h>
#include <stdexcept>
#include "json.hpp"


using namespace std;
using json = nlohmann::json;

class RecordManager
{

public:


	RecordManager(); // Default Constructor

	struct studentRecord
	{
		string name;
		int numberID;
		int rollID;
		float mathsMark;
	};


	/// <summary>
	/// Takes a Name, ID number,Roll number and Course marks; Then creates and saves Record for thoes details
	/// </summary>
	void CreateRecord();

	/// <summary>
	/// Deletes a record from the File Directory
	/// </summary>
	/// <param name="rollID">The ID of the record to be deleted</param>
	void DeleteRecord(int rollID);

	/// <summary>
	/// Takes a roll ID, searches for it, then allows alterations of said entry
	/// </summary>
	/// <param name="rollID"></param>
	void ModifiyRecord(int rollID)
	{

		// GetRecordFromDirectory(int rollID) 

		// DeleteRecord(int rollID)

		// CreateRecord(new detials);

	}



	/// <summary>
	/// Searches the file directory for a given roll ID, and returns that record if it exists in the directory.
	/// </summary>
	/// <param name="rollID">The roll ID number of the desired record</param>
	/// <returns>Record assiosiated with the ID</returns>
	json GetRecord(int rollID);

	/// <summary>
	/// Returns the entire contents of the file directory.
	/// </summary>
	/// <returns>All Records stored in the file directory as a stirng</returns>
	string GetAllRecords() 
	{
		// Returns All Entries In File Directory
	}

	/// <summary>
	/// Searches for a given ID, then returns the results for that record
	/// </summary>
	/// <param name="rollID">The roll ID number for the chosen record.</param>
	/// <returns>Returns just the results for the given record</returns>
	string GetResultsForRecord(int rollID) 
	{
		// GetRecordFromDirectory(int rollID) 

		// Return Results For Record If Found
	}


private:


	string FILEDIRECTORY = "Records.json";

	/// <summary>
	/// Trys to get and return a record from the directory for a given ID number.
	/// </summary>
	/// <param name="rollID">The roll ID number for the chosen record.</param>
	/// <returns>Record Assosiated With ID if it exists</returns>
	//string GetRecordFromDirectory(int rollID) 
	//{
	//	// Try Get Record
	//}


};

#pragma region JSON <-> C++ Object Converter.
namespace nlohmann
{

	template<>
	struct adl_serializer<RecordManager::studentRecord>
	{
		static void to_json(json& jasonObject, const RecordManager::studentRecord& recordStruct)
		{
			jasonObject = json
			{
				{"name",recordStruct.name},
				{"numberID",recordStruct.numberID},
				{"rollID",recordStruct.rollID},
				{"mathsMark",recordStruct.mathsMark}
			};
		}

		static void from_json(json& jasonObject, RecordManager::studentRecord& recordStruct)
		{

			try
			{
				recordStruct.name = jasonObject.at("name").get<string>();
				recordStruct.numberID = jasonObject.at("numberID").get<int>();
				recordStruct.rollID = jasonObject.at("rollID").get<int>();
				recordStruct.mathsMark = jasonObject.at("mathsMark").get<float>();

			}
			catch (const exception& e)
			{
				cout << "Invalid JSON Format" << e.what() << endl;
			}
		}

	};
}
#pragma endregion