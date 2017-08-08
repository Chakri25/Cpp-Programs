#include <iostream>

using namespace std;

struct studentData{
    string studentName;
    int studentId;
    int studentRank;
};

int main()
{
    studentData s1;
    s1.studentId = 1;
    s1.studentName = "Chakri";
    s1.studentRank = 100;

    cout << "student Name "<< s1.studentName<<endl;

    studentData *s2;
    s2 = &s1;
    cout << "student id "<< s2->studentId<< endl;
    return 0;
}
