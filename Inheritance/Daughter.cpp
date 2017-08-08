#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

Daughter::Daughter()
{
    //ctor
    cout << "I am daughter constructor" << endl;
}

Daughter::~Daughter()
{
    //dtor
    cout << "I am daughter deconstructor" << endl;
}

void Daughter::daughterfun(){
    publicvar = 10;
    cout << publicvar << endl;
    protectedvar = 20;
    cout << protectedvar << endl;
    /*privatevar = 30;
    cout << privatevar << endl;*/
}
