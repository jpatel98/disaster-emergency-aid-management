/*****************************************************************************
AidMan.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 10 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#include <iostream>
#include <cstring>
#include "Date.h"
#include "AidMan.h"

using namespace std;
namespace sdds
{

    // The AidMan has only one default constructor that initializes the main menu with 7 for the number of optionsand the following text as the menu content
    AidMan::AidMan()
    {
        m = "1- List Items\n2- Add Item\n3- Remove Item\n4- Update Quantity\n5- Sort\n6- Ship Items\n7- New/Open Aid Database\n---------------------------------\n";
        m = 7;
        Menu::set(m.getMenuContent(), 7);
        fileName = nullptr;
    }

    AidMan::AidMan(std::nullptr_t)
    {
        m = "1- List Items\n2- Add Item\n3- Remove Item\n4- Update Quantity\n5- Sort\n6- Ship Items\n7- New/Open Aid Database\n---------------------------------\n";
        m = 7;
        Menu::set(m.getMenuContent(), 7);
        fileName = nullptr;
    }

    AidMan::AidMan(const char *fileName)
    {
        this->fileName = new char[strlen(fileName) + 1];
        strcpy(this->fileName, fileName);
        m = "1- List Items\n2- Add Item\n3- Remove Item\n4- Update Quantity\n5- Sort\n6- Ship Items\n7- New/Open Aid Database\n---------------------------------\n";
        m = 7;
        Menu::set(m.getMenuContent(), 7);
    }

    void AidMan::set(const char *fileName)
    {
        delete[] this->fileName;
        Utils::alocpy(this->fileName, fileName);
        m = "1- List Items\n2- Add Item\n3- Remove Item\n4- Update Quantity\n5- Sort\n6- Ship Items\n7- New/Open Aid Database\n---------------------------------\n";
        m = 7;
        Menu::set(m.getMenuContent(), 7);
    }

    // An AidMan object can neither be copied nor assigned to another AinMan object.
    // When going out of scope the destructor makes sure there is no memory leak.
    AidMan::AidMan(const AidMan &a)
    {
        if (fileName != nullptr)
        {
            this->set(a.fileName);
        }
        else
            this->fileName = nullptr;
    }

    AidMan &AidMan::operator=(const AidMan &a)
    {
        if (this != &a)
        {
            this->set(a.fileName);
        }
        else
            this->fileName = nullptr;
        return *this;
    }

    AidMan::~AidMan()
    {
        delete[] this->fileName;
        this->fileName = nullptr;
    }

    // This function receives nothingand returns an unsigned integer that is the user's selection of an option in the main menu of the system.
    // The menu function will not change the state of the AidMan class.
    // The Menu will first print the title of the application, current dateand the data file name.
    // If the filename attribute is null, it will print "No file" instead of the file name.
    // Then it will run the main menu and return the selection made by the user.
    unsigned int AidMan::menu()
    {
        unsigned int option;
        Date D;

        cout << "Aid Management System" << endl;
        cout << "Date: " << D << endl;
        if (fileName == nullptr)
        {
            cout << "Data file: No file" << endl;
        }
        else
        {
            cout << "Data file: " << fileName << endl;
        }
        cout << "---------------------------------" << endl;
        option = Menu::run();

        return option;
    }

    // run() receivesand returns nothingand runs the whole application.
    // In a loop, the run function will keep displaying the menu by calling the menu() functionand awaits the user's entry. Then after each selection, based on the user's entry, it will execute the task chosen from the menu.
    void AidMan::run()
    {
        int option;

        do
        {
            option = menu();

            switch (option)
            {
            case 0:
                cout << "Exiting Program!" << endl;
                break;
            case 1:
                cout << endl;
                cout << "****List Items****" << endl;
                break;
            case 2:
                cout << endl;
                cout << "****Add Item****" << endl;
                break;
            case 3:
                cout << endl;
                cout << "****Remove Item****" << endl;
                break;
            case 4:
                cout << endl;
                cout << "****Update Quantity****" << endl;
                break;
            case 5:
                cout << endl;
                cout << "****Sort****" << endl;
                break;
            case 6:
                cout << endl;
                cout << "****Ship Items****" << endl;
                break;
            case 7:
                cout << endl;
                cout << "****New/Open Aid Database****" << endl;
                break;
            }
            cout << endl;
        } while (option);
    }
}