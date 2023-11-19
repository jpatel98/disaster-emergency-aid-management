/*****************************************************************************
iProduct.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 18 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#include "iProduct.h"
#include <iostream>
#include <cstring>

using namespace std;

namespace sdds
{
	istream &operator>>(istream &istr, iProduct &i)
	{
		i.read(istr);
		return istr;
	}

	ostream &operator<<(ostream &ostr, const iProduct &i)
	{
		i.display(ostr);
		return ostr;
	}
}