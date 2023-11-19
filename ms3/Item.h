/*****************************************************************************
Item.h

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 18 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/
#pragma once
#ifndef ITEM_H_
#define ITEM_H_
#include "iProduct.h"
#include "Status.h"
#include <iostream>

namespace sdds
{
	class Item : public iProduct
	{
		double price = 0;
		int hand_qua = 0;
		int need_qua = 0;
		char *desc{};
		bool flag = false;

	protected:
		Status s;
		int sku = 0;
		bool linear() const;

	public:
		Item();
		Item(const Item &i);
		Item &operator=(const Item &i);
		~Item();
		int qtyNeeded() const;
		int qty() const;
		operator double() const;
		operator bool() const;
		int operator-=(int qty);
		int operator+=(int qty);
		void linear(bool isLinear);
		Item &clear();
		bool operator==(int sku) const;
		bool operator==(const char *description) const;
		std::ofstream &save(std::ofstream &ofstr) const;
		std::ifstream &load(std::ifstream &ifstr);
		std::ostream &display(std::ostream &ostr) const;
		std::istream &read(std::istream &istr);
		int readSku(std::istream &istr);
	};

}

#endif // !ITEM_H_