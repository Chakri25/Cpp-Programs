#include <iostream>

using namespace std;

int main()
{
    try{
        int num1;
        cout << "enter a number ";
        cin >> num1;
        int num2;
        cout << "enter second number ";
        cin >> num2;
        if(num2 == 0)
            throw 99;
        cout << "num1/num2 " << num1/num2;
    }catch(...){//any exception can be caught by ...
        cout << "we can not divide by zero" << endl;
    }
    return 0;
}
