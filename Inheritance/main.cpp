#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

int main()
{
    Mother m;
    m.sayName();

    Daughter d;
    d.sayName();
    d.daughterfun();
    return 0;
}
