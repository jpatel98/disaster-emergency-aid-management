/*****************************************************************************
AidMan.h

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 10 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#ifndef AIDMAN_H_
#define AIDMAN_H_
#include "Menu.h"

namespace sdds
{
    class AidMan : public Menu
    {
        // file name -> Dynamically holding the name of a data file holding the aidand product information.
        // main menu -> A Menu object.
        char *fileName{};
        Menu m;
        unsigned int menu();

    public:
        AidMan();
        AidMan(std::nullptr_t);
        AidMan(const AidMan &a);
        AidMan(const char *fileName);
        void set(const char *fileName);
        AidMan &operator=(const AidMan &a);
        ~AidMan();
        void run();
    };

}
#endif // !AIDMAN_H_