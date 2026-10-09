/*NAME:KIMANI DAVID MUNGAI
REG NO:CT101/G/26615/25
COURSE:COMPUTER SCIENCE YEAR TWO(GROUP B)
CODE TITLE:DRIVING TEST RESULTS EVALUATION SYSTEM */



#include<iostream>
using namespace std;

int main()
{
string student_name;
int theory_marks,practical_marks;
float average_score;
cout << "Enter student name" << endl;
cin >> student_name;
cout << "Enter student theory marks" << endl;
cin >> theory_marks;
cout << "Enter student practical marks" << endl;
cin >> practical_marks;
cout << "---RESULTS---" << endl;
cout << "-----------------" << endl;
cout << "STUDENT NAME:" << student_name<<endl;
cout << "THEORY MARKS:" <<theory_marks<< endl;
cout << "PRACTICAL MARKS:"<<practical_marks << endl;
average_score=(theory_marks+practical_marks)/2.0;
if (average_score>=50)
cout << "passed" << endl;
else cout << "failed" << endl;
cout << "========================" << endl;

    return 0;
}