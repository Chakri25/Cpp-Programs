#include <iostream>

using namespace std;

int globvar = 100;

int main()
{
    int globvar = 10;
    cout << "Inside main gobalvar val is " << globvar << endl;
    cout << "Inside main gobalvar val is " << ::globvar;
    return 0;
}
