#include <iostream>

using namespace std;

int main()
{
    int a=10, *p=&a;
    cout << "a value is " << *p << endl;
    cout << "a's address is " << p << endl;

    //another declaration and intialization
    int b=10, *q;
    q = &b;
    cout << "b value is " << *q << endl;
    cout << "b's address is " << q << endl;

    return 0;
}
