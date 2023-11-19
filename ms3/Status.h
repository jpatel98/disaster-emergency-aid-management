/*****************************************************************************
Status.h

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 1 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#ifndef SDDS_STATUS_H
#define SDDS_STATUS_H
namespace sdds
{
    class Status
    {
        char *m_desc{};
        int m_code{};

    public:
        Status() = default;
        Status(const char *desc);
        Status(const Status &stat);
        Status &operator=(const Status &stat);
        ~Status();
        Status &operator=(const char *desc);
        Status &operator=(int code);
        operator int() const;
        operator const char *() const;
        operator bool() const;
        Status &clear();
    };
    std::ostream &operator<<(std::ostream &os, const Status &stat);
}
#endif // !SDDS_STATUS_H
