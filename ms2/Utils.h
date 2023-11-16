/*****************************************************************************
Utils.cpp

Full Name               : Jigar Patel
Student ID#             : 118005172
Email                   : jdpatel22@myseneca.ca
Date of completion      : 1 November 2023

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
******************************************************************************/
#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
namespace sdds
{
   const int sdds_testYear = 2023;
   const int sdds_testMon = 12;
   const int sdds_testDay = 9;

   class Utils
   {
      bool m_testMode = false;

   public:
      void getSystemDate(int *year = nullptr, int *mon = nullptr, int *day = nullptr);
      int daysOfMon(int mon, int year) const;
      void testMode(bool testmode = true);
      void alocpy(char *&des, const char *src);
      int getint(const char *prompt = nullptr);
      int getint(int min, int max, const char *prompt = nullptr, const char *errMes = nullptr);
   };
   extern Utils ut;

}

#endif // !SDDS_UTILS_H
