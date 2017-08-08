#include <iostream>
#include "student.h"

using namespace std;

student::student(int n)
{
    //ctor
    totalmarks = n;
}

student::student()
{
    //ctor
}

student::~student()
{
    //dtor
}

student student::operator+(student s){
    student newstudent;
    newstudent.totalmarks = this->totalmarks + s.totalmarks;
    return(newstudent);
}
