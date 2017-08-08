#include <iostream>

using namespace std;

void callByPointer(int *p){
    *p = 50;
}

void callByValue(int p){
    p = 50;
}

void callByReference(int& e){
    e = e*5;
    cout << "in the function e value is " << e << endl;
}

int main()
{
    int a=30;
    int b = 40;
    int *c;
    c = &b;
    cout << c << endl << *c << endl;
    callByPointer(&b);
    callByValue(a);
    cout << "a value after passing as value " << a << endl;
    cout << "b value after passing as value " << b << endl;
    cout << "c value after passing as value " << c << endl;

    //call by refernce
    int d = 100;
    callByReference(d);
    cout << "after multiplication with 5 d value is " << d << endl;

    //using reference
    int x = 10;
    int &y = x;
    cout << "x and y values are " << x <<" " << y << endl;
    //changing y value
    y = 100;
    cout << "x and y values after changing y value are " << x <<" " << y << endl;
    //changin x value
    x = 500;
    cout << "x and y values after changing x value are " << x <<" " << y << endl;
    return 0;
}
