#include <iostream>

using namespace std;

class employee{
public:
    static int countemp;
    static void displaycount(){
        cout << "count is " << countemp << endl;
    }
protected:
private:

};

int employee::countemp;


int main()
{
    int v;
    static int s;
    static float sf;
    static double sd;
    static bool sb;
    static char sc;
    char x;
    cout << "x value is " << x << endl;
    cout << "v value is " << v << endl;
    cout << "s value is " << s << endl;
    cout << "float s value is " << sf << endl;
    cout << "double s value is " << sd << endl;
    cout << "bool s value is " << sb << endl;
    cout << "char s value is " << sc << " null" << endl;

    //objects for employee
    employee e1, e2;
    e1.countemp = 10;
    e2.countemp = 20;//even if you change values for each object's variable, the last value only will be stored in all object's varianle.
    cout << "count " << employee::countemp << endl;
    employee::displaycount();
    return 0;
}
