#include"StudentRecordSystem.h"

// Constructor.
StudentRecordSystem::StudentRecordSystem() 
{
    // Launch Home Page
    HomePage();
}


/// <summary>
/// Acts as the inital landing page and, navigates between the menu and the exit.
/// </summary>
void StudentRecordSystem::HomePage() 
{

    cout << "=================================================" << endl;
    cout << "       Welcome to The Student Record System" << endl;
    cout << "=================================================" << endl;
    cout << "Please type the number of your selection and,\npress Enter" << endl;
    cout << "-------------------------------------------------" << "\n\n";

    // Load Page Options.
    cout << "1.Main Menu" << endl;
    cout << "2.Exit" << "\n\n";

    cin >> inputSelection;

    cout << "\n\n";
    system("cls");


    // Process Input.
    switch (inputSelection) 
    {

    case 1:
        cout << "Loading Main Menu..." << endl;
        MainMenuPage();
        break;

    case 2:
        cout << "GoodBye!" << endl;
        break;

    default:
        
        cout << "Invalid Input" << endl;
        HomePage();

    }
}


/// <summary>
/// The Main Menu where you can alter Records.
/// </summary>
void StudentRecordSystem::MainMenuPage() 
{

    cout << "=================================================" << endl;
    cout << "                      Menu                       " << endl;
    cout << "=================================================" << endl;
    cout << "Please type the number of your selection and,\npress Enter" << endl;
    cout << "-------------------------------------------------" << "\n\n";

    // Load Page Options.
    cout << "1.Create Report"    << endl;
    cout << "2.Modifiy Report"   << endl;
    cout << "3.Delete Report"    << endl;
    cout << "4.View Report"      << endl;
    cout << "5.View All Reports" << endl;
    cout << "6.View Results"     << endl;
    cout << "7.Back"             << "\n\n";

    cin >> inputSelection;

    cout << "\n\n";
    system("cls");


    // Process Input.
    switch (inputSelection)
    {

    case 1:
        cout << "Creating Report..." << endl;
        break;

    case 2:
        cout << "Modifiying Report..." << endl;
        break;

    case 3:
        cout << "Deleting Report..." << endl;
        break;

    case 4:
        cout << "Viewing Report..." << endl;
        break;

    case 5:
        cout << "Loading All Reports..." << endl;
        break;

    case 6:
        cout << "Viewing Results..." << endl;
        break;

    case 7:
        cout << "Back To Menu." << endl;
        break;

    default:
        
        cout << "Invalid Input" << endl;
        MainMenuPage();

    }


}




