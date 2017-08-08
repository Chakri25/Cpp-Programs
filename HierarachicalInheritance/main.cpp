#include <iostream>

using namespace std;

class Base1 {
public:
    Base1(){
        cout << "Base1 constructor"<< endl;
    }
    int baseVar1=1;
    void base1Fun1(){
        cout << "this is base 1 class fun 1" << endl;
    }
    ~Base1(){
        cout << "Base1 deconstructor"<< endl;
    }
};

class Base2: public Base1{
public:
    Base2(){
        cout << "Base2 constructor"<< endl;
    }
    int baseVar2=2;
    void base2Fun1(){
        cout << "this is base class 2 fun 1" << endl;
        cout << "baseVar1 value in base2 class is " << baseVar1<< endl;
    }
    ~Base2(){
        cout << "Base2 deconstructor"<< endl;
    }
};

class Base3: public Base2{
public:
    Base3(){
        cout << "Base3 constructor"<< endl;
    }
    int baseVar3=3;
    void base3Fun1(){
        cout << "this is base class 3 fun 1" << endl;
        cout << "baseVar1 value in base3 class is " << baseVar1<< endl;
        cout << "baseVar2 value in base3 class is " << baseVar2<< endl;
    }
    ~Base3(){
        cout << "Base3 deconstructor"<< endl;
    }
};

int main()
{
    Base3 b3;
    b3.base1Fun1();
    b3.base2Fun1();
    b3.base3Fun1();
    return 0;
}
