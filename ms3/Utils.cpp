/*****************************************************************************
Utils.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 1 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstring>
#include <iomanip>
#include "Utils.h"

using namespace std;
namespace sdds
{
   Utils ut;
   void Utils::testMode(bool testmode)
   {
      m_testMode = testmode;
   }
   void Utils::getSystemDate(int *year, int *mon, int *day)
   {
      if (m_testMode)
      {
         if (day)
            *day = sdds_testDay;
         if (mon)
            *mon = sdds_testMon;
         if (year)
            *year = sdds_testYear;
      }
      else
      {
         time_t t = std::time(NULL);
         tm lt = *localtime(&t);
         if (day)
            *day = lt.tm_mday;
         if (mon)
            *mon = lt.tm_mon + 1;
         if (year)
            *year = lt.tm_year + 1900;
      }
   }
   int Utils::daysOfMon(int month, int year) const
   {
      int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, -1};
      int mon = (month >= 1 && month <= 12 ? month : 13) - 1;
      return days[mon] + int((mon == 1) * ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
   }

   void Utils::alocpy(char *&destination, const char *source)
   {
      if (source != nullptr)
      {
         destination = new char[strlen(source) + 1];
         strcpy(destination, source);
      }
      else
      {
         delete[] destination;
         destination = nullptr;
      }
   }

   int Utils::getint(const char *prompt)
   {
      int enter = -1;

      if (prompt != nullptr)
      {
         while (!(cin >> enter))
         {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid Integer, retry: ";
         }
      }
      return enter;
   }

   int Utils::getint(int min, int max, const char *prompt, const char *errMes)
   {
      int enter = -1;
      bool flag = 0;

      if (prompt != nullptr)
      {
         do
         {
            flag = 0;
            enter = getint(prompt);
            if (enter < min || enter > max)
            {
               if (errMes != nullptr && !enter)
               {
                  cout << ", retry: ";
               }
               else
                  cout << "Value out of range [" << min << "<=val<=" << max << "]: ";
               flag = 1;
            }
         } while (flag);
      }
      return enter;
   }

   double Utils::getDouble(const char *prompt)
   {
      double enter = -1;

      if (prompt != nullptr)
      {
         while (!(cin >> enter))
         {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid number, retry: ";
         }
      }
      return enter;
   }

   double Utils::getDouble(double min, double max, const char *prompt, const char *errMes)
   {
      double enter = -1;
      bool flag = 0;

      if (prompt != nullptr)
      {
         do
         {
            flag = 0;
            enter = getDouble(prompt);
            if (enter < min || enter > max)
            {
               if (errMes != nullptr && !enter)
               {
                  cout << ", retry: ";
               }
               else
                  cout << "Value out of range [" << fixed << setprecision(2) << min << "<=val<=" << fixed << setprecision(2) << max << "]: ";
               flag = 1;
            }
         } while (flag);
      }
      return enter;
   }

   void Utils::extractChar(istream &istr, char ch) const
   {
      if (istr.peek() == ch)
      {
         istr.ignore();
      }
      else
      {
         istr.ignore(1000, ch);
         istr.setstate(ios::failbit);
      }
   }

}