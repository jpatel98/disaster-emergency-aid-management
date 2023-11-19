/*****************************************************************************
Item.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 18 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/
#include "Item.h"
#include "Utils.h"
#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>

using namespace std;

namespace sdds
{
	Item::Item() : desc(nullptr)
	{
		price = 0;
		hand_qua = 0;
		need_qua = 0;
		desc = nullptr;
		flag = false;
		sku = 0;
	}

	bool Item::linear() const
	{
		return flag;
	}

	Item::Item(const Item &i) : desc(nullptr)
	{
		price = i.price;
		hand_qua = i.hand_qua;
		need_qua = i.need_qua;
		flag = i.flag;

		delete[] desc;
		ut.alocpy(desc, i.desc);
	}

	Item &Item::operator=(const Item &i)
	{
		if (this != &i)
		{
			price = i.price;
			hand_qua = i.hand_qua;
			need_qua = i.need_qua;
			flag = i.flag;
			delete[] desc;
			ut.alocpy(desc, i.desc);
		}
		else
			desc = nullptr;

		return *this;
	}

	Item::~Item()
	{
		delete[] this->desc;
		this->desc = nullptr;
	}

	int Item::qtyNeeded() const
	{
		return need_qua;
	}

	int Item::qty() const
	{
		return hand_qua;
	}

	Item::operator double() const
	{
		return price;
	}

	Item::operator bool() const
	{
		return flag;
	}

	int Item::operator-=(int qty)
	{
		return hand_qua -= qty;
	}

	int Item::operator+=(int qty)
	{
		return hand_qua += qty;
	}

	void Item::linear(bool isLinear)
	{
		flag = isLinear;
	}

	Item &Item::clear()
	{
		delete[] this->desc;
		desc = nullptr;
		price = 0;
		hand_qua = 0;
		need_qua = 0;
		flag = false;
		sku = 0;

		return *this;
	}

	bool Item::operator==(int sku) const
	{
		return (this->sku == sku) ? true : false;
	}

	bool Item::operator==(const char *description) const
	{
		char *match;
		match = strstr(this->desc, description);
		if (match)
		{
		}
		return (match && this->desc != nullptr && description != nullptr) ? true : false;
	}

	ofstream &Item::save(ofstream &ofstr) const
	{
		if (desc)
		{
			ofstr << sku << "\t" << desc << "\t" << hand_qua << "\t" << need_qua << "\t" << fixed << setprecision(2) << price;
		}
		return ofstr;
	}

	ifstream &Item::load(ifstream &ifstr)
	{
		char *indesc = new char[1000];

		if (ifstr.good())
		{
			delete[] desc;
			ifstr >> sku;
			ut.extractChar(ifstr, '\t');
			ifstr.get(indesc, 1000, '\t');
			ut.alocpy(desc, indesc);
			ut.extractChar(ifstr, '\t');
			ifstr >> hand_qua;
			ut.extractChar(ifstr, '\t');
			ifstr >> need_qua;
			ut.extractChar(ifstr, '\t');
			ifstr >> price;
			ut.extractChar(ifstr, '\n');

			if (ifstr.bad())
				s = "Input file stream read failed!";
		}
		else
			ifstr.setstate(ios::badbit);

		delete[] indesc;
		indesc = nullptr;

		return ifstr;
	}

	ostream &Item::display(ostream &ostr) const
	{
		string str_desc = desc;
		str_desc = str_desc.substr(0, 35);

		if (ostr.fail())
		{
			ostr << s;
		}
		else if (linear())
		{
			ostr << setw(5) << sku << " | "
				 << setw(35) << left << str_desc << " | "
				 << setw(4) << right << hand_qua << " | "
				 << setw(4) << right << need_qua << " | "
				 << setw(7) << right << fixed << setprecision(2) << price << " |";
		}
		else
		{
			ostr << "AMA Item:" << endl;
			ostr << sku << ": " << desc << endl;
			ostr << "Quantity Needed: " << need_qua << endl;
			ostr << "Quantity Available: " << hand_qua << endl;
			ostr << "Unit Price: $" << price << endl;
			ostr << "Needed Purchase Fund: $" << fixed << setprecision(2) << price * (need_qua - hand_qua) << endl;
		}
		return ostr;
	}

	istream &Item::read(istream &istr)
	{
		char *indesc = new char[100];
		delete[] desc;
		desc = nullptr;
		istr.clear();

		if (istr.fail())
		{
			s = "Console entry failed!";
		}
		else
		{
			cout << "AMA Item:" << endl;
			cout << "SKU: " << sku << endl;
			cout << "Description: ";
			istr.get(indesc, 100, '\n');
			ut.extractChar(istr, '\n');
			ut.alocpy(desc, indesc);
			delete[] indesc;
			cout << "Quantity Needed: ";
			need_qua = ut.getint(1, 9999, "validNeed");
			ut.extractChar(istr, '\n');
			cout << "Quantity On Hand: ";
			hand_qua = ut.getint(0, need_qua, "validhand");
			ut.extractChar(istr, '\n');
			cout << "Unit Price: $";
			price = ut.getDouble(0.0, 9999.0, "validPrice");
			ut.extractChar(istr, '\n');
		}

		return istr;
	}

	int Item::readSku(istream &istr)
	{
		cout << "SKU: ";
		sku = ut.getint(40000, 99999, "validSKU");
		istr.clear();
		istr.ignore(1000, '\n');
		return sku;
	}

}