/*****************************************************************************
iProduct.h

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 18 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/
#ifndef SDDS_iPRODUCT_H
#define SDDS_iPRODUCT_H
#include <fstream>
#include <iostream>
using namespace std;
namespace sdds
{
    class iProduct
    {
    public:
        virtual ~iProduct();
        virtual int readSku(std::istream& istr);
        virtual int operator-=(int qty);
        virtual int operator+=(int qty);
        virtual operator double() const;
        virtual operator bool() const;
        virtual int qtyNeeded() const;
        virtual int qty() const;
        virtual void linear(bool isLinear);
        virtual ofstream& save(ofstream& ofstr)const;
        virtual ifstream& load(ifstream& ifstr);
        virtual ostream& display(ostream& ostr) const;
        virtual istream& read(istream& istr);
        virtual bool operator==(int sku) const;
        virtual bool operator==(const char* description) const;
    };
    istream& operator>>(istream&, iProduct&);
    ostream& operator<<(ostream&, const iProduct&);
}
#endif // !SDDS_iPRODUCT_H

