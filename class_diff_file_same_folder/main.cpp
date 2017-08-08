#include <iostream>
#include "sampleclass1.h"

using namespace std;

int main()
{
    sampleclass1 sc1;
    sc1.setName("Teja");
    cout << "name : " << sc1.getName();
    return 0;
}
