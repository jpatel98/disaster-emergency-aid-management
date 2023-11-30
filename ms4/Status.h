/*****************************************************************************
Status.h

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 1 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/
#ifndef SDDS_STATUS_H
#define SDDS_STATUS_H
#include <cstring>
#include <iostream>
using namespace std;
namespace sdds
{
	class Status
	{
	public:
		char* Description;
		int Codigo;// Spanish word for code is codigo
		Status(char* str = nullptr, int code = 0);
		Status(const Status& status);
		Status& operator=(const Status& status);
		~Status();
		Status& operator=(const char* str);
		Status& operator=(const int code);
		operator bool() const;
		operator int() const;
		operator char* () const;
		friend ostream& operator<<(ostream& os, const Status& status);
		Status& clear();
	};
}

#endif // !SDDS_STATUS_H