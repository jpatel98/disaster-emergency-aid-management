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
#include <iostream>
namespace sdds
{
	class Status
	{
		char *m_description{};
		int m_code;

	public:
		Status(const char *str = nullptr);
		Status(const Status &s);
		Status &operator=(const Status &s);
		Status &operator=(int num);
		Status &operator=(const char *str);

		virtual ~Status();

		Status &clear();

		operator int() const;
		operator const char *() const;
		operator bool() const;
	};
	std::ostream &operator<<(std::ostream &ostr, const Status &s);
}
#endif // !SDDS_STATUS_H
