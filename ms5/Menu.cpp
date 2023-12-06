/*****************************************************************************
Menu.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 12 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#include <iostream>
#include <cstring>
#include "Utils.h"
#include "Menu.h"

using namespace std;

namespace sdds
{
	Menu::Menu(unsigned int num, const char* str)
	{
		if (num < 15)
		{
			if (str != nullptr)
			{
				m_options = num;
				m_content = new char[strlen(str) + 1];
				strcpy(m_content, str);
			}
		}
	}
	Menu::~Menu()
	{
		delete[] m_content;
	}
	unsigned int Menu::run() const
	{
		cout << m_content;
		cout << "0- Exit" << endl;
		cout << "> ";
		int num = ut.getint(0, m_options);
		return num;
	}
}