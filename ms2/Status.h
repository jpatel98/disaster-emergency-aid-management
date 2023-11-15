/*****************************************************************************
Status.h

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 1 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#ifndef STATUS_H
#define STATUS_H
#include <iostream>
using namespace std;
namespace sdds
{
    class Status
    {
        char *Desc;
        int Code;

    public:
        Status();
        Status(const char *desc);
        Status(const Status &);
        Status &operator=(const char *);
        Status &operator=(int);
        operator int() const;
        operator bool() const;
        operator const char *() const;
        Status &clear();
        friend ostream &operator<<(ostream &, const Status &);
        ~Status();
    };
    extern Status sts;
}

#endif