/*****************************************************************************
Menu.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 12 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#include "Menu.h"
#include "Utils.h"

#include <iostream>
#include <cstring>

namespace sdds
{
    Menu::Menu(unsigned int a, const char *b)
    {
        if (a > max_option || b == nullptr)
        {
            m_numofoption = 0;
            m_option = nullptr;
        }
        else
        {
            m_numofoption = a;
            m_option = new char[strlen(b) + 1];
            strcpy(m_option, b);
        }
    }
    Menu::Menu(const char *option) : Menu(7, option) {}

    Menu::~Menu()
    {
        delete[] m_option;
    }

    unsigned int Menu::run()
    {
        int choice;
        std::cout << m_option << std::endl;
        std::cin >> choice;
        if (choice < 0 || choice > 7)
        {
            std::cout << "Invalid Menu!\n";
        }
        return ut.getint(0, 7, "> ");
    }

}