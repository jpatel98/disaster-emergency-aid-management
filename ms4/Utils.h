/*****************************************************************************
Utils.h

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 1 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/
#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
#include <iostream>
namespace sdds
{
	const int sdds_Test_Year = 2023;
	const int sdds_Test_Month = 12;
	const int sdds_Test_Day = 9;
	class Utils
	{
		bool m_testMode = false;
	public:
		void getSystemDate(int* year = nullptr, int* mon = nullptr, int* day = nullptr);
		int daysOfMon(int mon, int year)const;
		void testMode(bool testmode = true);
		int checking_num(std::istream& istr, int x, int y);
		double checking_float(std::istream& istr, double x, double y);
	};
	extern Utils ut;
}

#endif // !SDDS_UTILS_H