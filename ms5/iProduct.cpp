/*****************************************************************************
iProduct.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 18 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/
#include "iProduct.h"
using namespace std;
namespace sdds
{
	std::ostream& operator<<(std::ostream& ostr, const iProduct& i)
	{
		return i.display(ostr);
	}

	std::istream& operator>>(std::istream& istr, iProduct& i)
	{
		return i.read(istr);
	}

}

