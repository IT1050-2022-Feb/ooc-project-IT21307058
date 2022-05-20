#include "Report.h"
#include <iostream>
using namespace std;

Report::Report(){
    ReportNo = 0;
  }
Report::Report(int reportno, int noexaminee){
    ReportNo = reportno;
    NoOfExaminee = noexaminee;
}
int Report::getNoOfExaminee(){
    return NoOfExaminee;
}
void Report::display(){
    cout << "Report No: " <<  ReportNo << endl;
    cout << "No Examinee: " <<  NoOfExaminee << endl;
}
void Report::generateFinancialReport(){
  
}
void Report::generatePastPaymentReport(){
    
}
Report::~Report(){
    cout << "Report deleted" << endl;
}