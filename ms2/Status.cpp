/*****************************************************************************
Status.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 1 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#include <iostream>
#include "Status.h"

using namespace std;

namespace sdds
{

    void Status::setEmpty()
    {
        this->desc = nullptr;
        this->code = 0;
    }

    Status::Status()
    {
        setEmpty();
    }

    Status::Status(const char *desc, int code)
    {
        if (desc != nullptr)
        {
            this->setEmpty();
            this->set(desc, code);
        }
        else
            setEmpty();
    }

    void Status::set(const char *desc, int code)
    {
        delete[] this->desc;

        if (desc != nullptr)
        {
            Utils::alocpy(this->desc, desc);
            this->code = code;
        }
        else
            setEmpty();
    }

    Status::Status(const Status &s)
    {
        this->setEmpty();
        this->set(s.desc, s.code);
    }

    Status &Status::operator=(const Status &s)
    {
        if (&s != this)
            this->set(s.desc, s.code);
        return *this;
    }

    Status::~Status()
    {
        delete[] this->desc;
        this->desc = nullptr;
    }

    Status &Status::operator=(int code)
    {
        this->code = code;
        return *this;
    }

    Status &Status::operator=(const char *desc)
    {
        delete[] this->desc;
        Utils::alocpy(this->desc, desc);
        return *this;
    }

    Status::operator int() const
    {
        return this->code;
    }

    Status::operator const char *() const
    {
        return this->desc;
    }

    Status::operator bool() const
    {
        return (this->desc == nullptr) ? true : false;
    }

    Status &Status::clear()
    {
        delete[] this->desc;
        this->desc = nullptr;
        this->code = 0;

        return *this;
    }

    // Overload the insertion operator to be able to print a Status object using ostream.
    // This operator overload should print the Status only if it is in an invalid state.
    // When printing the status object the code is printed only if it is not zero as follows `"ERR# ? ? ? : " where ??? replaced with the code.
    // Then the description of the Status object is printed.
    ostream &operator<<(std::ostream &ostr, const Status &s)
    {
        int code = s.operator int();

        if (!s)
        {
            if (code != 0)
                ostr << "ERR#" << code << ": ";
            ostr << s.operator const char *();
        }
        return ostr;
    }

}