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