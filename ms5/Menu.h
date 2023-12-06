/*****************************************************************************
Menu.h

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 12 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#ifndef SDDS_MENU_H
#define SDDS_MENU_H
namespace sdds
{
	class Menu
	{
		char* m_content{};
		unsigned int m_options = 0u;
	public:
		Menu(unsigned int num = 16, const char* str = nullptr);
		Menu(const Menu& m) = delete;
		Menu& operator=(const Menu& m) = delete;
		virtual ~Menu();
		unsigned int run()const;
	};
}
#endif // 
