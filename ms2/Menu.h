/*****************************************************************************
Menu.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 12 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#ifndef SDDS_MENU_H
#define SDDS_MENU_H
#include "Utils.h"

namespace sdds
{

	class Menu : public Utils
	{
		const int max_options = 15;
		char *menuContent;
		unsigned int option;

		void setEmpty();
		void dellocate();

	public:
		const char *getMenuContent() const;
		Menu();
		Menu(const char *menuContent);
		Menu(const char *menuContent, unsigned int option);
		Menu(const Menu &m);
		operator bool();
		void set(const char *menuContent, unsigned int option);
		Menu &operator=(const Menu &m);
		Menu &operator=(int option);
		Menu &operator=(const char *menuContent);
		~Menu();
		unsigned int run();
	};

}
#endif // !MENU_H_