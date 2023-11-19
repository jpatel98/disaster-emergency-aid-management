/*****************************************************************************
Date.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 1 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/
#include <iostream>
#include <ctime>
#include <cstring>
#include "Date.h"
#include "Utils.h"

namespace sdds
{
	bool Date::validate()
	{
		bool val = 1;
		if (m_year >= 2023 && m_year <= max_year)
		{
			if (m_mon >= 1 && m_mon <= 12)
			{
				if (m_day >= 1 && m_day <= ut.daysOfMon(m_mon, m_year))
				{
					val = 1;
				}
				else
				{
					m_state = "Invalid day in date";
					m_state = 3;
					val = 0;
				}
			}
			else
			{
				m_state = "Invalid month in date";
				m_state = 2;
				val = 0;
			}
		}
		else
		{
			m_state = "Invalid year in date";
			m_state = 1;
			val = 0;
		}
		return val;
	}
	int Date::uniqueDateVal() const
	{
		return m_year * 372 + m_mon * 31 + m_day;
	}
	Date::Date()
	{
		ut.getSystemDate(&m_year, &m_mon, &m_day);
		m_state.clear();
		m_formatted = 1;
	}
	Date::Date(int year, int mon, int day)
	{
		m_year = year;
		m_mon = mon;
		m_day = day;
		m_state.clear();
		m_formatted = 1;
		validate();
	}
	bool Date::operator==(const Date &D) const
	{
		return uniqueDateVal() == D.uniqueDateVal();
	}
	bool Date::operator!=(const Date &D) const
	{
		return uniqueDateVal() != D.uniqueDateVal();
	}
	bool Date::operator<(const Date &D) const
	{
		return uniqueDateVal() < D.uniqueDateVal();
	}
	bool Date::operator>(const Date &D) const
	{
		return uniqueDateVal() > D.uniqueDateVal();
	}
	bool Date::operator<=(const Date &D) const
	{
		return uniqueDateVal() <= D.uniqueDateVal();
	}
	bool Date::operator>=(const Date &D) const
	{
		return uniqueDateVal() >= D.uniqueDateVal();
	}
	//state accessor
	//Create an accessor method called state that returns a constant reference to the State of the Date.
	const Status &Date::state() const
	{
		return m_state;
	}
	Date &Date::formatted(bool value)
	{
		m_formatted = value;
		return *this;
	}
	std::ostream &Date::write(std::ostream &os) const
	{
		if (m_formatted)
		{
			os << m_year << "/";
			os.width(2);
			os.fill('0');
			os << m_mon << "/";
			os.width(2);
			os.fill('0');
			os << m_day;
		}
		else
		{
			os.width(2);
			os.fill('0');
			os << m_year % 100;
			os.width(2);
			os.fill('0');
			os << m_mon;
			os.width(2);
			os.fill('0');
			os << m_day;
		}
		return os;
	}
	std::istream &Date::read(std::istream &is)
	{
		int date;
		is >> date;
		if (is)
		{
			if (date > 99999)
			{
				m_year = 2000 + (date / 10000);
				m_mon = date % 10000 / 100;
				m_day = date % 100;

				if (!validate())
				{
					is.setstate(std::ios::failbit);
				}
			}
			else
			{
				ut.getSystemDate(&m_year, &m_mon, &m_day);
				m_mon = date / 100;
				m_day = date % 100;
				if (!validate())
				{
					is.setstate(std::ios::failbit);
				}
			}
		}
		else
		{
			std::cout << "Invalid date value";
		}
		is.ignore(1000, '\n');
		return is;
	}
	std::ostream &operator<<(std::ostream &os, const Date &D)
	{
		return D.write(os);
	}
	std::istream &operator>>(std::istream &is, Date &D)
	{
		return D.read(is);
	}
}