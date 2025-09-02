#include"StudentRecordSystem.h"

// Constructor.
StudentRecordSystem::StudentRecordSystem() 
{
    // Loads A Greeting And The Home Page.
    Greeting(); 
}




/// <summary>
/// Provides a brief Greeting
/// </summary>
void StudentRecordSystem::Greeting()
{

    cout << "=================================================" << endl;
    cout << "       Welcome to The Student Record System" << endl;
    cout << "=================================================" << endl;


    cout << "Please type the number of your selection and,\npress Enter" << endl;
    cout << "-------------------------------------------------" << "\n\n";

    // Launch Home Page
    HomePage();

}

/// <summary>
/// Acts as the inital landing page and, navigates between the menu and the exit.
/// </summary>
void StudentRecordSystem::HomePage() 
{
    
    // Load Page Options.
    cout << "1.Menu" << endl;
    cout << "2.Exit" << "\n\n";

    cin >> inputSelection;

    cout << "\n\n";



    // Process Input.
    switch (inputSelection) 
    {

    case 1:
        cout << "Loading Menu..." << endl;
        break;

    case 2:
        cout << "GoodBye!" << endl;
        break;

    default:
        system("cls");

        cout << "Invalid Input" << endl;
        Greeting();

    }


}




