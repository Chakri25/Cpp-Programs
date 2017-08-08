#include "sampleclass1.h"
#include <iostream>

using namespace std;

sampleclass1::sampleclass1()
{
    cout << "This class is in another file";
}

void sampleclass1::setName(string n){
    name = n;
}

string sampleclass1::getName(){
    return name;
}
