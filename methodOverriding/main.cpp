#include <iostream>

using namespace std;

class person{
public:
    void display(){
        cout << "i am person "<< endl;
    }
};

class student: public person{
public:
    void display(){
        cout << "i am student" << endl;
        person::display();
    }
};

int main()
{
    student s;
    s.display();
    s.person::display();
    return 0;
}
