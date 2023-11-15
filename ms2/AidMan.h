/*****************************************************************************
AidMan.h

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 10 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#ifndef AIDMAN_H
#define AIDMAN_H
#include "Menu.h"
namespace sdds
{
    class AidMan : public Menu
    {
        char *m_filename;
        unsigned int menu();

    public:
        AidMan();
        ~AidMan();
        AidMan(const char* filename);
        void run();
    };

}

#endif