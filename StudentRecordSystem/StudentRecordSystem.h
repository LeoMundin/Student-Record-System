#pragma once

#include <iostream>
#include"RecordManager.h"



using namespace std;


class StudentRecordSystem
{
public:

    StudentRecordSystem();

private:

    RecordManager recordManager;

    int inputSelection;

    string RECORD_DIRECTORY = "/Student_Records";

    void HomePage();

    void MainMenuPage();

};