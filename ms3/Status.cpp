/*****************************************************************************
Status.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 1 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/
#include <iostream>
#include <cstring>
#include <fstream>
#include "Utils.h"
#include "Status.h"

namespace sdds
{
    Status::Status(const char *desc)
    {
        if (desc)
        {
            ut.alocpy(m_desc, desc);
        }
        m_code = 0;
    }

    Status::Status(const Status &stat)
    {
        *this = stat;
    }

    Status &Status::operator=(const Status &stat)
    {
        if (this != &stat)
        {
            m_code = stat.m_code;
            ut.alocpy(m_desc, stat.m_desc);
        }
        return *this;
    }

    Status::~Status()
    {
        delete[] m_desc;
    }

    Status &Status::operator=(const char *desc)
    {
        ut.alocpy(m_desc, desc);
        return *this;
    }

    Status &Status::operator=(int code)
    {
        m_code = code;
        return *this;
    }

    Status::operator int() const
    {
        return m_code;
    }

    Status::operator const char *() const
    {
        return m_desc;
    }

    Status::operator bool() const
    {
        return m_desc == nullptr;
    }

    Status &Status::clear()
    {
        delete[] m_desc;
        m_desc = nullptr;
        m_code = 0;
        return *this;
    }

    std::ostream &operator<<(std::ostream &os, const Status &stat)
    {
        if (!stat)
        {
            if (stat.operator int() != 0)
            {
                os << "ERR#" << stat.operator int() << ": ";
            }
            os << stat.operator const char *();
        }
        return os;
    }
}
