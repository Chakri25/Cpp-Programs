#include <iostream>
#include "student.h"

using namespace std;

int main()
{
    student s1(100);
    student s2(100);
    student s3;
    s3 = s1+s2;
    cout << s3.totalmarks;
    return 0;
}
