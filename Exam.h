#include "Result.h"
#include "Payment.h"
#include "ExamSchedule.h"
#define SIZE 2
#define SIZE1 2
#define SIZE2 1

class Exam {
private:
    char ExamID[10];
    char ExamName[50];
    char ExamType[50];
    int NoOfQuestions;
    int count = 0;
    Result* result[SIZE];
    Payment* payment[SIZE1];
     ExamSchedule* examschedule[SIZE2];
public:
    Exam();
    Exam(const char e_ID[], const char e_name[], const char e_type[], int noofqsy, const char resultID[], double mrk, const char grade[], double gpa);
    void displayResultDetails();
    void displayPaymentDetails();   
    ~Exam();
};