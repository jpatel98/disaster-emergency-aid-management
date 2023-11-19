/*****************************************************************************
iProduct.h

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 18 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#pragma once
#ifndef IPRODUCT_H
#define IPRODUCT_H
#include <iostream>

namespace sdds
{
	class iProduct
	{
	public:
		virtual ~iProduct(){};
		virtual int readSku(std::istream &istr) = 0;
		virtual int operator-=(int qty) = 0;
		virtual int operator+=(int qty) = 0;
		virtual operator double() const = 0;
		virtual operator bool() const = 0;
		virtual int qtyNeeded() const = 0;
		virtual int qty() const = 0;
		virtual void linear(bool isLinear){};
		virtual std::ofstream &save(std::ofstream &ofstr) const { return ofstr; };
		virtual std::ifstream &load(std::ifstream &ifstr) { return ifstr; };
		virtual std::ostream &display(std::ostream &ostr) const { return ostr; };
		virtual std::istream &read(std::istream &istr) { return istr; };
		virtual bool operator==(int sku) const = 0;
		virtual bool operator==(const char *description) const = 0;
	};
	std::ostream &operator<<(std::ostream &ostr, const iProduct &i);
	std::istream &operator>>(std::istream &istr, iProduct &i);
}

#endif // !IPRODUCT_H