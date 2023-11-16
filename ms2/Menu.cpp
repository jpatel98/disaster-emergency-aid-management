/*****************************************************************************
Menu.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 12 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#include <iostream>
#include "Utils.h"
#include "Menu.h"

using namespace std;
namespace sdds
{

    void Menu::setEmpty()
    {
        menuContent = nullptr;
        option = 0;
    }

    void Menu::dellocate()
    {
        delete[] this->menuContent;
        this->menuContent = nullptr;
    }

    Menu::Menu()
    {
        setEmpty();
    }

    Menu::Menu(const char *menuContent)
    {
        setEmpty();
        this->set(menuContent, 7); // Assuming 7 is the number of options
    }

    Menu::Menu(const char *menuContent, unsigned int option)
    {
        setEmpty();
        this->set(menuContent, option);
    }

    void Menu::set(const char *menuContent, unsigned int option)
    {
        dellocate();

        if (menuContent != nullptr || option > (unsigned)max_options)
        {
            Utils::alocpy(this->menuContent, menuContent);
            this->option = option;
        }
        else
            setEmpty();
    }

    Menu::Menu(const Menu &m)
    {
        this->set(m.menuContent, m.option);
    }

    Menu &Menu::operator=(const Menu &m)
    {
        if (this != &m)
        {
            this->set(m.menuContent, m.option);
        }
        return *this;
    }

    Menu::~Menu()
    {
        delete[] this->menuContent;
        this->menuContent = nullptr;
    }

    Menu &Menu::operator=(int option)
    {
        this->option = option;
        return *this;
    }

    Menu &Menu::operator=(const char *menuContent)
    {
        Utils::alocpy(this->menuContent, menuContent);
        return *this;
    }

    unsigned int Menu::run()
    {
        int option;

        cout << this->menuContent;
        cout << "0- Exit" << endl;
        cout << "> ";

        option = Utils::getint(0, this->option, "menutest", NULL);
        return option;
    }
}