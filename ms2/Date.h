/*****************************************************************************
Date.h

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 31 October 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/
#ifndef SDDS_DATE_H
#define SDDS_DATE_H
#include <iostream>
#include "Status.h"
namespace sdds
{
    const int max_year = 2030;
    class Date
    {
        int m_year{};
        int m_mon{};
        int m_day{};
        bool m_formatted{};
        Status m_state{};
        bool validate();

    public:
        int uniqueDateVal() const;
        Date();
        Date(int year, int mon, int day);
        //Overload all the six comparison operators: ==, !=, <, >, <=, >=
        //Use the private method, unique date value for the comparison.
        bool operator==(const Date &D) const;
        bool operator!=(const Date &D) const;
        bool operator<(const Date &D) const;
        bool operator>(const Date &D) const;
        bool operator<=(const Date &D) const;
        bool operator>=(const Date &D) const;
        const Status &state() const;
        Date &formatted(bool value);
        std::ostream &write(std::ostream &os) const;
        std::istream &read(std::istream &is);
    };
    std::ostream &operator<<(std::ostream &os, const Date &D);
    std::istream &operator>>(std::istream &is, Date &D);
}

#endif // !SDDS_DATE_H
