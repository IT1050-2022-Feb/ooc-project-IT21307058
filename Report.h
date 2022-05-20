#include <iostream>
using namespace std;
#pragma once

class Report{
private:
  int ReportNo;
  int NoOfExaminee;
public:
  Report();
  Report(int reportno, int noexaminee);
  int getNoOfExaminee();
  void display();
  void generateFinancialReport();
  void generatePastPaymentReport();
  ~Report();
};