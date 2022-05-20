#include "SystemAdmin.h"
#include <cstring>

SystemAdmin::SystemAdmin(){
     strcpy(SystemAdminID, "");
     strcpy(SystemAdminIDPassword, "");
     strcpy(SystemAdminIDEmail, "");
   };
SystemAdmin::SystemAdmin(const char sysadminid[], const char sysadminpsw[], const char sysadminemail[]){
     strcpy(SystemAdminID, sysadminid);
     strcpy(SystemAdminIDPassword, sysadminpsw);
     strcpy(SystemAdminIDEmail, sysadminemail);
     FinancialAmount = 1;
   };
void SystemAdmin::calFinancialAmount(int amount, Report *r){
  FinancialAmount = amount * r->getNoOfExaminee();
}

void SystemAdmin::display(){
  cout << "System Admin ID: " << SystemAdminID << endl;
  cout << "Financial Amount: " << FinancialAmount << endl;
} 

SystemAdmin::~SystemAdmin(){
  cout << "System Admin delete" << endl;
}