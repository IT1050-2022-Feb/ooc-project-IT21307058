#include "Report.h"
#pragma once
class SystemAdmin{
private:
   char SystemAdminID[10];
   char SystemAdminIDPassword[8];
   char SystemAdminIDEmail[100];
   double FinancialAmount; 
public:
   SystemAdmin();
   SystemAdmin(const char sysadminid[], const char sysadminpsw[], const char sysadminemail[]);
   void calFinancialAmount(int amount, Report *r1);
   void display();
   ~SystemAdmin();
};