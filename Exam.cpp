#include "Exam.h"
#include <cstring>

using namespace std;

Exam::Exam(){
        strcpy(ExamID, "");
        strcpy(ExamName, "");
        strcpy(ExamType, "");
        NoOfQuestions = 0;

        result[0] = new Result("",0, "", 0);
        result[1] = new Result("", 0, "", 0);

        payment[0] = new Payment("", 0, 0);
        payment[1] = new Payment("", 0, 0);

        examschedule[0] = new ExamSchedule("", 0, "");
}

Exam::Exam(const char e_ID[], const char e_name[], const char e_type[], int noofqsy, const char ID[], double mrk2, const char grade2[], double gpa2){
        result[0] = new Result();
        result[1] = new Result();

        payment[0] = new Payment();
        payment[1] = new Payment();

        examschedule[0] = new ExamSchedule();
}
void Exam::displayResultDetails(){
        
}
void Exam::displayPaymentDetails() {
        
}

Exam::~Exam(){
  cout << "Exam shutting down" << endl;
        for (int j = 0; j < SIZE; j++) {
            delete result[j];
        }
        for (int j = 0; j < SIZE; j++) {
            delete payment[j];
        }
        for (int k = 0; k < SIZE2; k++) {
            delete examschedule[k];
        }
        cout << "The end";
}