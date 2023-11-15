/*****************************************************************************
Menu.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 12 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#ifndef MENU_H
#define MENU_H

namespace sdds {
	const int max_option = 15;
	class Menu {
		char* m_option;
		unsigned int m_numofoption;
	public:
		Menu(unsigned int, const char*);
		Menu(const char* option);
		~Menu();
		unsigned int run();
	};

}
#endif // !MENU_H