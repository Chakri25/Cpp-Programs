#include <iostream>

using namespace std;

class Base1{
public:
    Base1(){
        cout << "Base1 constructor"<< endl;
    }
    int baseVar1;
    void baseFun1(){
        cout << "this is base class fun 1" << endl;
    }
    ~Base1(){
        cout << "Base1 deconstructor"<< endl;
    }
};

class derived1 : public Base1{
public:
    derived1(){
        cout << "derived1 constructor"<< endl;
    }
    void der1Fun1(){
        cout << "this is derived class 1 fun 1" << endl;
        baseVar1 = 10;
        cout << "base class variable in derived class 1 value is " << baseVar1 << endl;
    }
    ~derived1(){
        cout << "derived1 deconstructor"<< endl;
    }
};

class derived2 : public Base1{
public:
    derived2(){
        cout << "derived2 constructor"<< endl;
    }
    void der2Fun1(){
        cout << "this is derived class 2 fun 1" << endl;
        baseVar1 = 20;
        cout << "base class variable in derived class 2 value is " << baseVar1 << endl;
    }
    ~derived2(){
        cout << "derived2 deconstructor"<< endl;
    }
};

int main()
{
    derived1 d1;
    d1.baseFun1();
    d1.der1Fun1();

    derived2 d2;
    d2.baseFun1();
    d2.baseFun1();
    d2.der2Fun1();
    return 0;
}
